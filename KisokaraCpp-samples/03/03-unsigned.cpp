#include <iostream>
using namespace std;

int main() {
  unsigned a = 1;
  int b = -3;
  cout << a + b << endl;//�o�͒l�F4294967294

  unsigned x = 10;
  cout << (-1 <= x ? "�������Ȃ�" : "������") << endl;//�o�͒l�F������
}