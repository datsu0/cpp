#include <iostream>
#include <algorithm>
using namespace std;

void mySwap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 1;
  int b = 2;

  //mySwap(a, b);
  swap(a, b);//<algorithm>���K�v

  cout << a << endl;//�o�͒l�F2
  cout << b << endl;//�o�͒l�F1
}