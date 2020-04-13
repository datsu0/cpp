#include <iostream>
using namespace std;

void showAddress( int& a ) {
    cout << a << endl;
    cout << &a << endl;
    a = 20;
}

int main()
{
    /* 変数 */
    int a = 10;
    cout << a << endl;
    cout << &a << endl;
    showAddress( a );
    cout << a << endl;
    cout << &a << endl;
    return 0;
}