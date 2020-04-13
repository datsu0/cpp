#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void f();

int main(){
    extern int x;
    cout << x << endl;
    f();
}

