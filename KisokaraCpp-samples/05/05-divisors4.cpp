#include <iostream>
using namespace std;

int numOfDivisors(int n);//�֐��̐錾

int main() {
  //10����20�܂ł̐��̖񐔂𐔂���
  for (int n = 10; n <= 20; ++n) {
    int result = numOfDivisors(n);
    cout << n << "�̖񐔂̐��F" << result << endl;
  }
}

int numOfDivisors(int n) {
  int divisors = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;
  }
  return divisors;
}