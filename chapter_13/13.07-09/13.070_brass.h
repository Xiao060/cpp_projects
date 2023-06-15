#ifndef BRASS_H_
#define BRASS_H_

#include<string>

using namespace std;

class Brass{
    private:
        string fullName;
        long acctNum;
        double balance;
    public:
        // 构造函数 
        Brass(const string & s = "Nullbody", long an = -1, double bal = 0.0);
        // 析构函数
        virtual ~Brass() {};

        void Deposit(double amt);
        virtual void Withdraw(double amt);
        double Balance() const;
        virtual void ViewAcct() const;
        




};

#endif