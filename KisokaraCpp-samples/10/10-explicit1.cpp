#include <iostream>
using namespace std;

struct A {
  int x;
  A(int newX) : x(newX) { cout << "A(int newX) is called.\n"; }
};

int main() {
  A a = 5; //A a(5);�Ɖ��߂����B
           //�o�͒l�FA(int newX) is called.
  cout << a.x << endl;//�o�͒l�F5
}