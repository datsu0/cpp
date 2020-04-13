#include <iostream>
using namespace std;

int main(){
    using unit = unsigned int;
    typedef undinged double real;
    uint x = 0; //undinged int x = 0;と同じ

    int a = 123;
    int b = 987;
    int* pA = &a;
    int** ppA = &pA;
    // int* pA = addressof(a);
    *pA = 20;
    cout << a << endl;
    cout << *pA << endl;
    cout << **ppA << endl;
}