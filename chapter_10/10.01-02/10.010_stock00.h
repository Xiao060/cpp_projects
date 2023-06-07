#ifndef STOCK_H_
#define STOCK_H_

#include<string>
using namespace std;


class Stock{
    // private 可以省略, 默认隐藏数据
    private:        // 私有部分, 通常存储数据项, 数据的实现函数
        string company;
        long shares;
        double share_val;
        double total_val;
        // 函数定义位于类声明中, 是内联函数
        // 也可以在类外定义, 使用 inline 函数名()... 定义内联函数
        void set_tot(){     
            total_val = shares * share_val; 
        }

    public:     // 公有部分, 通常存放类的接口函数
        void acquire(const string &co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};




#endif
