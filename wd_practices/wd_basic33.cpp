#include<iostream>

using namespace std;

class Tree{
    private:
        int ages;
    public:
        Tree();
        Tree(int n);
        void grow(int year);
        void ShowAge();
};

Tree::Tree(){
    ages = 0;
}

Tree::Tree(int n){
    ages = n;
}

void Tree::grow(int year){
    ages += year;
}

void Tree::ShowAge(){
    cout << "Tree ages: " << ages << endl;
}

int main(){
    Tree tree(5);

    tree.ShowAge();
    tree.grow(6);
    tree.ShowAge();

    return 0;
}