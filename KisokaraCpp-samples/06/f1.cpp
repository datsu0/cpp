#include <iostream>
using namespace std;

int a[] = { 123, 456 };//a�̒�`

int f1() { return a[0]; }

int main() {
  cout << "f1: " << f1() << endl;

  int f2();//�֐��錾
  cout << "f2: " << f2() << endl;
}