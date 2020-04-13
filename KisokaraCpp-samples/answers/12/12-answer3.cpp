#include <vector>
#include <chrono>
#include <algorithm>
#include <limits>
#include "12-answer3.h"
using namespace std;
using namespace std::chrono;

int main() {
  auto t0 = high_resolution_clock::now();

  //const int N = 400000;
  //const int N = 2147483647;
  const int N = numeric_limits<int>::max();
  int rootN = static_cast<int>(sqrt(N)) + 1;

  //‘f”‚ğ”‚¦‚È‚ª‚ç2ˆÈãsqrt(N)ˆÈ‰º‚Ì‘f”‚ÌƒŠƒXƒg‚ğì‚éB
  vector<int> primes;
  int total = 0;
  #pragma omp parallel for schedule(dynamic, 1000) reduction(+:total)
  for (int n = 2; n <= rootN; ++n) {
    if (isPrime(n)) {
      ++total;
      #pragma omp critical
      primes.push_back(n);
    }
  }

  sort(primes.begin(), primes.end());

  //‘f”‚ÌƒŠƒXƒg‚ğg‚Á‚Ä‘f”‚ğ”‚¦‚éB
  #pragma omp parallel for schedule(dynamic, 1000) reduction(+:total)
  for (int n = rootN + 1; n < N; ++n) {
    if (isPrime(n, primes)) {
      ++total;
    }
  }
  if (isPrime(N, primes)) ++total;

  cout << "‘f”‚Ì”F" << total << endl;

  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " •b\n";
}