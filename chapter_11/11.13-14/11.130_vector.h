#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>
using namespace std;

namespace VECTOR{
    class Vector{
        public:
            enum Mode {RECT, POL};
        private:
            double x;
            double y;
            double mag;
            double ang;
            Mode mode;
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        public:
            // 默认构造函数 
            Vector();
            // 自定义构造函数
            Vector(double n1, double n2, Mode form = RECT);
            // 析构函数
            ~Vector();

            void reset(double n1, double n2, Mode from=RECT);
            // 4 个内联函数
            double xval() const { return x; }
            double yval() const { return y; }
            double magval() const { return mag; }
            double angval() const { return ang; }

            void polar_mode();
            void rect_mode();

            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & t) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            friend Vector operator*(double n, const Vector & a);

            friend ostream & operator<<(ostream & os, const Vector & v);
    };
}

#endif