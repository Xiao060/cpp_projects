#include<iostream>

using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level);

int main(){
    char ruler[Len];
    ruler[0] = '|';
    // 最后一项为空字符 '\0', 字符串最后一个字符索引为 Len-2
    ruler[Len-2] = '|';
    ruler[Len-1] = '\0';
    for (int i=1; i<Len-2; ++i){
        ruler[i] = ' ';
    }

    int min = 0;
    int max = Len - 2;
    
    // 0 阶打印可以直接合并到 for 循环中, 见1
    cout << ruler << endl;

    for (int i=1; i<=Divs; ++i){
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        // 下面两行可以省略, 因为 阶数 递增, 前面的步骤与之前的重复, 没必要清空重做, 见1
        for (int j=1; j<Len-2; ++j)
            ruler[j] = ' ';
    }
        
    return 0;
}


void subdivide(char ar[], int low, int high, int level){
    if (level == 0)
        return ;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level-1);
    subdivide(ar, mid, high, level-1);   
}