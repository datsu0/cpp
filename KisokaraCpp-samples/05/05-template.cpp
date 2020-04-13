#include <iostream>
#include <string>
using namespace std;

template <typename T>
void mySwap(T& x, T& y) {
  T tmp = x;
  x = y;
  y = tmp;
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

  string s = "abc";
  string t = "xyz";
  mySwap(s, t);     //mySwap(string& a, string& b)���g��
  cout << s << endl;//�o�͒l�Fxyz
  cout << t << endl;//�o�͒l�Fabc
}