#include <iostream>
using namespace std;

int main() {
  int n = 5;
  switch (n % 3) {
  case 0:
    cout << "3�̔{���ł��B\n";
    break;
  case 1:
    /* FALLTHROUGH */
  case 2:
    cout << "3�̔{���ł͂���܂���B\n";
    break;
    //�o�́F3�̔{���ł͂���܂���B
  }
}