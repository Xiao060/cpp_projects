#include<iostream>
#include<string>

using namespace std;

class Test{
    private:
        string type = "长方形";
        int len;
        int wid;
    public:
        Test();
        Test(int l, int w);
        ~Test();
        void square();
};

Test::Test(){
    len = wid = 0.0; 
}

Test::Test(int l, int w){
    len = l;
    wid = w;
}

Test::~Test(){}

void Test::square(){
     cout << type << " : " << len * wid;
}


int main(){

    Test x(2, 3);

}