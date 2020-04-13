#include <vector>
#include <chrono>
#include <algorithm>//�C���_1
#include "number.h"
using namespace std;
using namespace std::chrono;

int main() {
  auto t0 = high_resolution_clock::now();

  const int N = 400000;

  vector<int> primes;

  #pragma omp parallel                              //�C���_2
  #pragma omp for schedule(dynamic, 1000)           //�C���_3
  //#pragma omp parallel for schedule(dynamic, 1000)//1�s�ɂ܂Ƃ߂Ă�OK
  for (int n = 2; n <= N; ++n) {
    if (isPrime(n)) {
      #pragma omp critical//�C���_4
      primes.push_back(n);
    }
  }

  cout << "�f���̐��F" << primes.size() << endl;

  sort(primes.begin(), primes.end());//�C���_5
  report(primes.cbegin(), primes.cend());

  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " �b\n";
}