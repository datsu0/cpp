#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int a = 1;
  int b = 2;
  swap(a, b);
  cout << a << endl;//�o�͒l�F2
  cout << b << endl;//�o�͒l�F1

  double x = 1.23;
  double y = 4.56;
  swap(x, y);
  cout << x << endl;//�o�͒l�F4.56
  cout << y << endl;//�o�͒l�F1.23

  string s = "abc";
  string t = "xyz";
  swap(s, t);
  cout << s << endl;//�o�͒l�Fxyz
  cout << t << endl;//�o�͒l�Fabc
}