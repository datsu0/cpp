#include <iostream>
using namespace std;

int main() {
  int n = 5;
  if (n % 3 == 0) cout << "3�̔{���ł��B\n";
  else if (n % 3 == 1) cout << "3�Ŋ������]���1�ł��B\n";
  else if (n % 3 == 2) cout << "3�Ŋ������]���2�ł��B\n";
  else cout << "���������������ł��B";
  //�o�͒l�F3�Ŋ������]���2�ł��B
}