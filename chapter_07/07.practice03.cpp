#include<iostream>

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void volume(box * m);
void output(const box m);

using namespace std;

int main(){

    box m = {"aaa", 3.0, 4.0, 5.0};
    volume(&m);
    output(m);

    return 0;
}


void output(const box m){
    cout << "maker: " << m.maker << endl;
    cout << "lenght: " << m.length << endl;
    cout << "width: " << m.width << endl;
    cout << "height: " << m.height << endl;
    cout << "volume: " << m.volume << endl;
}

void volume(box * m){
    m->volume = m->height * m->length * m->width;
}