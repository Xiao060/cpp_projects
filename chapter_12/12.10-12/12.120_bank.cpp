#include<iostream>
#include<cstdlib>
#include<ctime>
#include "12.100_queue.h"

using namespace std;

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(){

    srand(time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    // 每循环一次表示现实的一分钟, 此处求模拟总次数
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    for (int cycle=0; cycle<cyclelimit; ++cycle){

        if (newcustomer(min_per_cust)){
            if (line.isfull())
                ++turnaways;
            else{
                ++customers;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }

        if (wait_time <= 0 && !line.isempty()){
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            ++served;
        }

        if (wait_time > 0)
            --wait_time;
        sum_line += line.queuecount();
    }

    // 打印结果
    if (customers > 0){
        cout << "customers accepted: " << customers << endl;
        cout << "            served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;

        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);

        cout << "average queue size: ";
        cout << (double) sum_line / cyclelimit  << endl;
        cout << "         wait time: " << (double) line_wait / served << " miniutes\n";
    }else
        cout << "No customers!\n";
    
    cout << "Done!\n";

    return 0;
}


bool newcustomer(double x){
    // RAND_MAX 为 rand() 能取得的最大值
    // 若 x = 6, 则算式取值为 0-5(6)
    // 我们希望客户到达的时间随机, 但平均每小时有 10 名客户到达, 
    // 即 10名/60min, 即 1名/6min, 即每循环 6 次, 一次成功
    // 即 x min/名
    return (rand() * x / RAND_MAX < 1);
}