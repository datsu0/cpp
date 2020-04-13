#include <iostream>
using namespace std;

int main() {
  int n = 6;
  if (n % 3 == 0) cout << "n‚Í3‚Ì”{”‚Å‚·B\n";       //o—Í’lFn‚Í3‚Ì”{”‚Å‚·B
  else if (n % 3 == 1) cout << "n‚Í3‚Ì”{”+1‚Å‚·B\n";//ðŒ‚Í•]‰¿‚³‚ê‚È‚¢B
  else if (n % 3 == 2) cout << "n‚Í3‚Ì”{”+2‚Å‚·B\n";//ðŒ‚Í•]‰¿‚³‚ê‚È‚¢B
}