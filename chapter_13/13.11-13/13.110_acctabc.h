#ifndef ACCTABC_H_
#define ACCTABC_H_

#include<iostream>
#include<string>

using namespace std;

class AcctABC{
    private:
        string fullName;
        long acctNum;
        double balance;
    protected:
        struct Formatting{
            ios_base::fmtflags flag;
            streamsize pr;
        };

        const string & FullName() const { return fullName; }

        long AcctNum() const { return acctNum; }

        // 设置 输出格式 并返回设置前的格式
        Formatting SetFormat() const;

        // 接收 输出格式 并完成 设置
        void Restore(Formatting & f) const;
    public:
        // 构造函数
        AcctABC(const string & s = "Nullbody", long an = -1, double bal = 0.0);

        // 析构虚函数
        virtual ~AcctABC(){}

        double Balance() const { return balance; }

        void Deposit(double amt);

        
        // 因为 Brass 类 与 BrassPlus 类 取款/查询操作不同, 所以此处将函数设为 纯虚函数
        
        // 取款函数
        virtual void Withdraw(double amt) = 0;

        virtual void ViewAcct() const = 0;
};



class Brass: public AcctABC {
    public:
        // 构造函数, 继承自 AccABC 类, 所以此处需要使用 初始化成员列表
        Brass (const string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}

        virtual ~Brass() {}

        virtual void Withdraw(double amt);

        virtual void ViewAcct() const;
};

class BrassPlus : public AcctABC{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);

        BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);

        virtual void Withdraw(double amt);
        virtual void ViewAcct() const;

        void ResetMax(double m) { maxLoan = m; }

        void ResetOwes() { owesBank = 0; } 
};

#endif