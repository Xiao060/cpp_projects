#include<iostream>

// 声明结构数组,此处使用的是外部声明(放在main函数外,提倡使用)
struct inflatable{      
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;

    inflatable guest = {"Glorious Gloria", 1.88, 29.99};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};

    cout << "Expand your guest list with: " << guest.name << " and " 
                                            << pal.name << "!\n";
    cout << "You can have both for $" << guest.price + pal.price << "!\n";

    return 0;
}





