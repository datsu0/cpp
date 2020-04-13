#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
template <typename T>
void mySwap(T&a, T&b){
    T tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 1;
    int b = 2;
    mySwap(a,b);
    cout << a << endl;
    cout << b << endl;
    std::string c = "abcd";
    std::string d = "efgh";
    mySwap(c,d);
    cout << c << endl;
    cout << d << endl;
}