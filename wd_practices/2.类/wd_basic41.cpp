#include<iostream>
#include<string>

using namespace std;

class Mammal{
    private:
        
    public:
        string type;
        virtual void speak(){}; 
};

class Dog : public Mammal{
    private:

    public:
        Dog(){
            type = "狗";
        };
        virtual void speak(){
            cout << type << " : Hello World!\n";
        }
};


int main(){

    Dog d;
    
    d.speak();

    return 0;
}