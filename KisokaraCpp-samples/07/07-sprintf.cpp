#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  char str[100];//������̂��߂̗̈�̊m��
  int a = 10, b = 20;
  sprintf(str, "%d + %d = %d", a, b, a + b);
  cout << str << endl;//�o�͒l�F10 + 20 = 30
}