#include<iostream>

const int SLEN = 30;

struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

using namespace std;

int getinfo(student p[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(){
    int class_size;
    cout << "Enter class size: ";
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    
    student * ptr_stu = new student[class_size];

    int entered = getinfo(ptr_stu, class_size);

    for (int i=0; i<entered; ++i){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);

    delete [] ptr_stu;
    cout << "Done\n";

    return 0;
}


int getinfo(student p[], int n){
    int i;
    for (i=0; i<n; ++i){
        cout << "请依次输入姓名, 爱好, oop等级:\n";
        if (cin.getline(p[i].fullname, SLEN) && 
            cin.getline(p[i].hobby, SLEN) && 
            cin >> p[i].ooplevel)
            cin.get();
    }

    return i;
}


void display1(student st){
    cout << "姓名: " << st.fullname 
         << "    爱好: " << st.hobby
         << "    oop等级: " << st.ooplevel << endl;
}

void display2(const student * ps){
    cout << "姓名: " << ps->fullname 
         << "    爱好: " << ps->hobby
         << "    oop等级: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n){
    for (int i=0; i<n; ++i)
        cout << "姓名: " << pa[i].fullname 
         << "    爱好: " << pa[i].hobby
         << "    oop等级: " << pa[i].ooplevel << endl;

}