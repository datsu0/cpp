#include <iostream>
using namespace std;

int main() {
  int n = 6;
  if (n % 3 == 0) cout << "n��3�̔{���ł��B\n";       //�o�͒l�Fn��3�̔{���ł��B
  else if (n % 3 == 1) cout << "n��3�̔{��+1�ł��B\n";//�����͕]������Ȃ��B
  else if (n % 3 == 2) cout << "n��3�̔{��+2�ł��B\n";//�����͕]������Ȃ��B
}