#include <iostream>
using namespace std;

void mySwap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void mySwap(double& a, double& b) {
  double tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 1;
  int b = 2;
  mySwap(a, b);     //mySwap(int& a, int& b)���g��
  cout << a << endl;//�o�͒l�F2
  cout << b << endl;//�o�͒l�F1

  double x = 1.23;
  double y = 4.56;
  mySwap(x, y);     //mySwap(double& a, double& b)���g��
  cout << x << endl;//�o�͒l�F4.56
  cout << y << endl;//�o�͒l�F1.23
}