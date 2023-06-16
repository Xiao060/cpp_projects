#include<iostream>
#include "13.140_dma.h"

using namespace std;

int main(){

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);

    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;

    cout << "\nDisplaying lacksDMA object:\n";
    cout << balloon << endl;

    cout << "\nDisplaying hasDMA object:\n";
    cout << map << endl;

    lacksDMA balloon2(balloon);
    cout << "\nResult of lacksDMA copy: \n";
    cout << balloon2 << endl;

    hasDMA map2;
    map2 = map;
    cout << "\nResult of hasDMA assignment:\n";
    cout << map2 << endl; 

    return 0;
}