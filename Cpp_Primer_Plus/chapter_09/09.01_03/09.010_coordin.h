// 头文件内放置 结构声明 / 使用结构的函数原型


// if not defined COO... 怎么怎么样
// 避免多次引用同一个头文件
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif