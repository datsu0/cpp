#include <iostream>
using namespace std;

int factorial(int n) {
  int f = 1;
  for (int i = 2; i <= n; ++i) {
    f *= i;
  }
  return f;
}

int main() {
  //1����15�܂ł̐����̊K����v�Z����
  for (int n = 1; n <= 15; ++n) {
    cout << "f(" << n << ") = " << factorial(n) << endl;
  }
}