#include <iostream>
using namespace std;

int f() {
  static int x = 0;//�ÓI�ϐ��i��������1�x�����j
  ++x;
  return x;
}

int main() {
  cout << f() << endl;//�o�͒l�F1
  cout << f() << endl;//�o�͒l�F2�i�ÓI�ϐ��̋��L�j
  cout << f() << endl;//�o�͒l�F3�i�ÓI�ϐ��̋��L�j
}