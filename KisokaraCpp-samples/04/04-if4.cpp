#include <iostream>
using namespace std;

int main() {
  int n = 9;
  if (n % 2 == 1) {
    cout << "n�͊�ł��B\n";                           //�o�͒l�Fn�͊�ł��B
    if (n % 3 == 0) cout << "n��3�̔{������ł��B\n";//�o�͒l�Fn��3�̔{������ł��B
  }
}