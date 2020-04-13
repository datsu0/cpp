#include <iostream>
using namespace std;

int main()
{
    /* 変数 */
    int a = 10;
    
    /* &を付けるとアドレスを返す */
    cout << &a << endl;
    
    /* ポインタ変数 *を入れるとアドレスを格納できる */
    int *b = &a;
    cout << b << endl;
    
    /* 変数 */
    string c = "address"; 
    
    /* &を付けるとアドレスを返す */
    cout << &c << endl;
    
    /* ポインタ変数 *を入れるとアドレスを格納できる */
    string *d = &c; 
    cout << d << endl;

    return 0;
}