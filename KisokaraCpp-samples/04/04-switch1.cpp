#include <iostream>
using namespace std;

int main() {
  int n = 5;
  switch (n % 3) {
  case 0:
    cout << "3�̔{���ł��B\n";
    break;
  case 1:
    cout << "3�Ŋ������]���1�ł��B\n";
    break;
  case 2:
    cout << "3�Ŋ������]���2�ł��B\n";
    break;
  default:
    cout << "���������������ł��B\n";
    break;
    //�o�͒l�F3�Ŋ������]���2�ł��B
  }
}