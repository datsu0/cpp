#include <vector>
#include <chrono>
#include "number.h"
using namespace std;
using namespace std::chrono;

int main() {
  auto t0 = high_resolution_clock::now();

  const int N = 400000;

  vector<int> primes;//Œ‹‰Ê‚ðŠi”[‚·‚évector

  for (int n = 2; n <= N; ++n) {
    if (isPrime(n)) {     //‘f”‚È‚ç
      primes.push_back(n);//vector‚É’Ç‰Á‚·‚é
    }
  }

  cout << "‘f”‚Ì”F" << primes.size() << endl;

  report(primes.cbegin(), primes.cend());

  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " •b\n";
}