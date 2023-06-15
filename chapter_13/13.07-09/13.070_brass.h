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
        // 析构函数, 虚函数, 确保派生对象的释放
        virtual ~Brass() {};

        double Balance() const;
        void Deposit(double amt);

        // 虚方法, 在基类中的函数被声明为 虚函数 后, 后自动在派生类中生成对应的 虚函数, 也可以 手动用 virtual 指明
        virtual void Withdraw(double amt);
        virtual void ViewAcct() const;
};


class BrassPlus : public Brass{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
        BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);

        // 虚方法
        virtual void ViewAcct() const;
        virtual void Withdraw(double amt);

        void ResetMax(double m) { maxLoan = m; }
        void ResetRate(double r) { rate = r; }
        void ResetOwes() { owesBank = 0; }
};

#endif