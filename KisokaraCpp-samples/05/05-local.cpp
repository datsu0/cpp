#include <iostream>
using namespace std;

int f() {
  int x = 0;
  ++x;
  return x;
}

int main() {
  cout << f() << endl;//�o�͒l�F1
  cout << f() << endl;//�o�͒l�F1�i�O�̌Ăяo���Ƃ͖��֌W�j
  cout << f() << endl;//�o�͒l�F1�i�O�̌Ăяo���Ƃ͖��֌W�j
}