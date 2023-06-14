#include<iostream>
#include<cstdlib>
#include "12.100_queue.h"

using namespace std;

// 常量要在对象创建前确定
Queue::Queue(int qs): qsize(qs) {
    // 传统C NULL; C++98 0; C++11 nullptr
    front = rear = NULL;
    items = 0;
}

Queue::~Queue(){
    Node * temp;
    while (front != NULL){
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const {
    return items == 0;
}

bool Queue::isfull() const {
    return items == qsize;
}

int Queue::queuecount() const {
    return items;
}

bool Queue::enqueue(const Item & item){
    if (isfull())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = NULL;
    ++items;
    if (front == NULL)
        front = add;
    else
        rear->next = add;
    rear = add;

    return true;
}

bool Queue::dequeue(Item & item){
    if (front == NULL) // isempty()
        return false;
    item = front->item;
    --items;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = NULL;
    return true;
}

void Customer::set(long when){
    arrive = when;
    // 每位客户的处理时间是随机生成的
    processtime = rand() % 3 +1;
}