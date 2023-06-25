#include<iostream>
#include<cmath>

using namespace std;

void print(int n, int * q);
bool check(int i, int j, int * q);
void place(int r, int n, int * q);


int tot = 0;

int main(){
    int n;
    cout << "请输入皇后数量: ";
    cin >> n;

    int q[n] = {0};
    
    place(1, n, q);

    cout << tot << endl;

    return 0;
}


// 打印放置方案, n 代表皇后数量
void print(int n, int * q){ 
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (q[i] == j)
                cout << "Q";
            else
                cout << ".";
        }
        cout << endl;
    }
    cout << endl;
}

// 检测 第 i 行, 第 j 列 是否可以放置皇后
bool check(int i, int j, int * q){
    if (i == 0)
        return true;
    else{
        for (int k=0; k<i; ++k)
            if (q[k] == j || abs(q[k]-j) == abs(k-i))
                return false; 
        return true;
    }
}

// 放置皇后, r 代表放置的是第几个皇后, n 代表棋盘的规模
void place(int r, int n, int * q){
    if (r > n){
        tot += 1;
        cout << tot << endl;
        print(n, q);
    }else{
        for (int j=0; j<n; ++j){
            // cout << r-1 << " " << j << " " << (bool) check(r-1, j, q) << endl;
            if (check(r-1, j, q)){
                q[r-1] = j;
                place(r+1, n, q);
            }      
        }
    }
}
