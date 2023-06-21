#ifndef STOCK10_H_
#define STOCK10_H_

#include<string>

using namespace std;

class Stock{
    private:
        string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){
            total_val = shares * share_val;
        }
    
    public:
        // 默认构造函数
        Stock();
        // 自定义构造函数
        Stock(const string &co, long n = 0, double pr = 0.0);
        // 析构函数, 对象过期时, 完成清理工作
        ~Stock();           
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};

#endif