#include<cstring>           // 包含
#include<iostream>
#include<string> 
/*
注意:iostream里已经包含了string; 
srd::istream/std::ostream -> std::ios_base -> 
getloc() -> std::locale -> name() -> std::string
但是,为了使用时更加直接方便,建议重新导入覆盖掉上述路径
*/          


int main(){
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2);
    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    return 0;
}