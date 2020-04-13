#include <iostream>
using namespace std;

struct A {
  int x;
  //ˆÃ–Ù‚ÌŒ^•ÏŠ·‚ğ‹Ö~‚·‚éB
  explicit A(int newX) : x(newX) { cout << "A(int newX) is called.\n"; }
};

int main() {
  A a = 5;//ƒGƒ‰[
}