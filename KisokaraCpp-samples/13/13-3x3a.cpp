#include <chrono>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
using namespace std::chrono;

const int n = 3;                  //�s����ї�̐�
const int N = n * n;              //���p���鐔�̍ő�l
const int s = N * (N + 1) / 2 / n;//�s�E��E�Ίp���̘a

void report(const vector<int>& x) {
  for (unsigned i = 0; i < x.size(); ++i) {
    cout << setw(3) << x[i];
    if ((i + 1) % n == 0) cout << endl;
  }
  cout << endl;
}

bool goal(vector<int>& x) {
  //for (int i : x) cout << i << ","; cout << endl;//�f�o�b�O�p
  if (s != x[0] + x[1] + x[2] ||
      s != x[3] + x[4] + x[5] ||
      s != x[6] + x[7] + x[8] ||
      s != x[0] + x[3] + x[6] ||
      s != x[1] + x[4] + x[7] ||
      s != x[2] + x[5] + x[8] ||
      s != x[0] + x[4] + x[8] ||
      s != x[2] + x[4] + x[6]) {
    return false;
  }
  return true;
}

int main() {
  auto t0 = high_resolution_clock::now();

  int counter = 0;
  int solutions = 0;
  vector<int> x;
  for (int i = 1; i <= N; ++i) x.push_back(i);
  do {
    ++counter;
    if (goal(x)) {
      ++solutions;
      report(x);
    }
  } while (next_permutation(x.begin(), x.end()));

  cout << "result: " << solutions << " / " << counter << endl;
  auto t1 = high_resolution_clock::now();
  cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " sec.\n";
}