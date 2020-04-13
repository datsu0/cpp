#include <iostream>
using namespace std;

int main(){
    int m;

    cout << (2<4 ? "abc" : "DEF") << endl;
    cout << (m=1,m+2) << endl;
    int n =1;
    n = --n / --n;
    cout << n << endl;

    unsigned a = 1;
    int b = -3;
    cout << a+b << endl;
    unsigned x = 10;
    cout << (-1<=x ? "not small\n" : "small\n");
}