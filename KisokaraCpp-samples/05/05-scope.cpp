#include <iostream>
using namespace std;

int x;//�O���[�o���ϐ�

void f() {
  x = 2;
  int y = 2;//���[�J���ϐ�
  cout << "y in f = " << y << endl;//�o�͒l�Fy in f = 2;
}

int main() {
  x = 1;
  int y = 1;//���[�J���ϐ�
  f();
  cout << "x = " << x << endl;//�o�͒l�Fx = 2
  cout << "y = " << y << endl;//�o�͒l�Fy = 1
}