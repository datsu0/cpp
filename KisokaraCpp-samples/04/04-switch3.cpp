#include <iostream>
using namespace std;

int main() {
  int n = 5;
  switch (n % 3) {
  case 0:
    cout << "3‚Ì”{”‚Å‚·B\n";
    break;
  case 1:
    /* FALLTHROUGH */
  case 2:
    cout << "3‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n";
    break;
    //o—ÍF3‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB
  }
}