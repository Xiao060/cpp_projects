#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt{
    private:
        // 1 英石 = 14 磅
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt();
        // 该函数接收 1 个参数, 能够实现 隐式类型转换
        // 例: Stonewt x; x = 19.6;
        // 只有接收 1 个参数的 构造函数 才能这样
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        
        ~Stonewt();

        void show_lbs() const;
        void show_stn() const;
};

#endif