#include <iostream>
using namespace std;

int numOfDivisors(int n);//ŠÖ”‚ÌéŒ¾

int main() {
  //10‚©‚ç20‚Ü‚Å‚Ì”‚Ì–ñ”‚ğ”‚¦‚é
  for (int n = 10; n <= 20; ++n) {
    int result = numOfDivisors(n);
    cout << n << "‚Ì–ñ”‚Ì”F" << result << endl;
  }
}

int numOfDivisors(int n) {
  int divisors = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;
  }
  return divisors;
}