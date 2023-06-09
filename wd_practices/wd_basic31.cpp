#include<iostream>

using namespace std;

class String{
    private:
        char head[100];
        int n;
    public:
        String();
        String(char *Head);
        void reverse();
        void print();
};

String::String(){
    head[0] = '\0';
    n = 0;
}

String::String(char * Head){
    char * p = Head;
    int i = 0;
    while (i < 99 && *p != '\0'){
        head[i] = *p;
        ++i;
        ++p;
    }
    head[i] = '\0';
    n = i;
}

void String::reverse(){
    char temp;
    for (int i=0, j=n-1; i < j; ++i, --j){
        temp = head[i];
        head[i] = head[j];
        head[j] = temp;
    }
}

void String::print(){
    int i = 0;
    while (i < 100 && head[i] != '\0')
        cout << head[i++];  
    cout << endl;
}

int main(){
    char m[10] = "abcdef";
    String x(m);
    x.print();
    x.reverse();
    x.print();
    return 0;
}

