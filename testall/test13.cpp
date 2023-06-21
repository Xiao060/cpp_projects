#include<iostream>

using namespace std;

struct LNode{
    int data;
    struct LNode * next;
};

void show(LNode * h);
void cz(LNode * h);


int main(){
    LNode * a = new LNode;
    LNode * b = new LNode;
    LNode * c = new LNode;

    b->data = 12;
    a->next = b;
    c->data = 13;
    b->next = c;
    c->next = NULL;

    show(a);

    return 0;
}

void cz(LNode * h){
    LNode *p, *q;
    p = h;
    int x;

    cout << "请输入: ";
    while (cin >> x){
        q = new LNode;
        q->data = x;
        q->next = nullptr;
        p->next = q;
        p = q;
    }
}

void show(LNode * h){
    LNode * p = h->next;

    while (p){
        cout << p->data << " ";
        p = p->next;
    }
 
    cout << endl;
}