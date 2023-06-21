#include<iostream>

using namespace std;

struct LNode{
    int data;
    struct LNode * next;
};

void create(LNode * h);
void del(LNode * h, int x);
void show(LNode * h);

int main(){
    LNode * h = new LNode;
    
    create(h);
    show(h);

    del(h, 12);
    show(h);

    del(h, 3);
    show(h);

    return 0;
}

void create(LNode * h){
    int x, n;
    LNode * p = h;
    LNode * q;

    n = 1;
    cout << "请输入第 " << n++ << " 个整数: ";
    while (cin >> x){
        q = new LNode;
        q->data = x;
        q->next = NULL;
        p->next = q;
        p = q;
        cout << "请输入第 " << n++ << " 个整数: ";
    }
}

void del(LNode * h, int x){
    LNode * p = h;
    LNode * q = p->next;

    while (q){
        if (q->data != x){
            p = q;
            q = q->next;
        }else{
            p->next = q->next;
            delete q;
            cout << x << " 节点已删除\n";
            return ;
        }
    }

    cout << x << " 节点不存在, 删除失败\n";
}

void show(LNode * h){
    LNode * p = h->next;

    while (p){
        cout << p->data << " ";
        p = p->next;
    }
 
    cout << endl;
}