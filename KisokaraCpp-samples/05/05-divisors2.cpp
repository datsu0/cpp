#include <iostream>
using namespace std;

int main() {
  int n, divisors;

  //10�̖񐔂𐔂���
  n = 10;
  divisors = 0;//�񐔂𐔂��邽�߂̕ϐ�
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;//����؂ꂽ�琔�𑝂₷
  }
  cout << n << "�̖񐔂̐��F" << divisors << endl; //�o�͒l�F10�̖񐔂̐��F4
  
  //12�̖񐔂𐔂���
  n = 12;
  divisors = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;
  }
  cout << n << "�̖񐔂̐��F" << divisors << endl; //�o�͒l�F12�̖񐔂̐��F6
}