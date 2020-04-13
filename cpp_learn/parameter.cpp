#include <iostream>
using namespace std;

void f1(int x){cout<<++x<<endl;}
void f2(const int x){cout<< x+1 << endl;}
void f3(int &x){cout<< ++x << endl;}
void f4(const int &x){cout<< x+1 << endl;}
//void f5(int&& x){cout<< ++x << endl;}
//void f6(const int&& x){cout<< x+1 << endl;}
void f7(int* p){cout<< ++(*p) << endl;}
void f8(const int* p){cout<< (*p) << endl;}

int main(){
    int x1 = 100;
    f1(x1);
    int x5 = 500;
    int x6 = 600;
    //f5(static_cast<int&&>(x5));
    //f6(static_cast<int&&>(x6));
}