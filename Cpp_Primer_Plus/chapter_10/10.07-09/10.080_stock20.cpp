#include<iostream>
#include "10.070_stock20.h"

Stock::Stock(){
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string &co, long n, double pr){
    company = co;
    if (n < 0){
        cout << "Number of shares can't be negative; " << company << " shares set to 0.\n";
        shares = 0;
    }else
        shares = n;
    share_val = pr;
    set_tot();
}

// 析构函数, 此处无代码, 静默处理
Stock::~Stock(){}

void Stock::buy(long num, double price){
    if (num < 0)
        cout << "Number of shares purchased can't be negative. Transaction is aborted.\n";
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price){
    if (num < 0)
        cout << "Number of shares sold can't be negative. Transaction is aborted.\n";
    else if (num > shares)
        cout << "You can't sell more than you have! Transaction is aborted.\n";
    else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show() const {
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = cout.precision(3);

    cout << " Company: " << company
         << "\n Shares: " << shares
         << "\n Share Price: $" << share_val;

    cout.precision(2);
    cout << "\n Total Worth: $" << total_val << endl;

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}


const Stock & Stock::topval(const Stock & s) const{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}