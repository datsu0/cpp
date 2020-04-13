#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int numOfDivisors(int n) {
  int divisors = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) ++divisors;
  }
  return divisors;
}

bool less1(int lhs, int rhs) {
  return numOfDivisors(lhs) < numOfDivisors(rhs);
}

int main() {
  //2�̔�r
  cout << min(3, 2) << endl;//�o�͒l�F2
  cout << max(3, 2) << endl;//�o�͒l�F3

  //�C�ӌ̔�r
  cout << min({ 3, 2, 1, 4 }) << endl;//�o�͒l�F1
  cout << max({ 3, 2, 1, 4 }) << endl;//�o�͒l�F4

  //�����Ɏ擾
  auto result1 = minmax({ 3, 2, 1, 4 });
  cout << result1.first << endl; //�o�͒l�F1
  cout << result1.second << endl;//�o�͒l�F4

  //��r���@�̎w��
  auto result2 = minmax({ 10, 11, 9, 12 }, less1);
  cout << result2.first << endl; //�o�͒l�F11
  cout << result2.second << endl;//�o�͒l�F12

  //�R���e�i�̍ő�E�ŏ�
  vector<int> v{ 10, 11, 9, 12 };
  auto minIter = min_element(v.cbegin(), v.cend());
  cout << *minIter << endl;//�o�͒l�F9

  auto maxIter = max_element(v.cbegin(), v.cend());
  cout << *maxIter << endl;//�o�͒l�F12

  auto minmaxIter1 = minmax_element(v.cbegin(), v.cend());
  cout << *minmaxIter1.first << endl; //�o�͒l�F9
  cout << *minmaxIter1.second << endl;//�o�͒l�F12

  auto minmaxIter2 = minmax_element(v.cbegin(), v.cend(), less1);
  cout << *minmaxIter2.first << endl; //�o�͒l�F11
  cout << *minmaxIter2.second << endl;//�o�͒l�F12
}