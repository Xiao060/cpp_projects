#include<iostream>
#include<string>

using namespace std;

class Student{
    private:
        string name;
        int score;
    public:
        Student();
        Student(string n, int s);
        friend void getLevel(const Student & t);
};

Student::Student(){
    name[0] = '\0';
    score = 0;
}

Student::Student(string n, int s){
    name = n;
    score = s;
}

void getLevel(const Student & t){
    cout << t.name;
    if (t.score >= 90)
        cout << " 优\n";
    else if (t.score >= 80)
        cout << " 良\n";
    else if (t.score >= 70)
        cout << " 中\n";
    else if (t.score >= 60)
        cout << " 及格\n";
    else
        cout << " 不及格\n";
}

int main(){
    Student t1("Lei Li", 96);
    Student t2("Meimei Han", 77);

    getLevel(t1);
    getLevel(t2);

    return 0;
}