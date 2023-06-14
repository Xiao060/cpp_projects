#ifndef QUEUE_H_
#define QUEUE_H_

class Customer{
    private:
        long arrive;
        int processtime;
    public:
        Customer(){ 
            arrive = processtime = 0; 
        }
        void set(long when);
        long when() const { 
            return arrive; 
        }
        int ptime() const { 
            return processtime; 
        }
};


typedef Customer Item;

class Queue{
    private:
        // 队列节点
        struct Node {
            Item item; 
            struct Node * next;
        };

        enum {Q_SIZE = 10};

        Node * front;
        Node * rear;
        int items;
        // 常量
        const int qsize;

        // 
        Queue(const Queue & q) : qsize(0){ };
        Queue & operator=(const Queue & q) { return *this; }

    public:
        // 构造函数
        Queue(int qs = Q_SIZE);
        // 析构函数
        ~Queue();
        // 判断 队列 是否为 空
        bool isempty() const;
        // 判断 队列 是否 满
        bool isfull() const;
        // 返回队列长度
        int queuecount() const;
        // 入队
        bool enqueue(const Item &item);
        // 出队
        bool dequeue(Item &item);
};

#endif