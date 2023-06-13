#include<iostream>
#include<string>
#include<new>

using namespace std;

const int BUF = 512;

class JustTesting{
    private:
        string words;
        int number;
    public:
        JustTesting(const string & s = "Just Testing", int n=0){
            words = s;
            number = n;
            cout << words << " constructed\n";
        }

        ~JustTesting(){
            cout << words << " destoryed\n";
        };

        void Show() const {
            cout << words << ", " << number << endl;
        }
};

int main(){
    char * buffer = new char[BUF];

    JustTesting *pc1, *pc2;

    // 定位 new 运算符, 在 buffer 数组中为 JustTesting 分配空间
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    cout << "Memory block addresses:\n" 
         << " buffer: " << (void *) buffer << endl 
         << " heap: " << pc2 << endl;

    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;

    // 此处直接释放整个 buffer 空间, 但pc1/pc3 的析构函数不会执行
    // 要仅删除 pc1/pc3 的空间, 需要显式调用它们的析构函数 
    delete [] buffer;
    cout << "Done\n";

    return 0;
}