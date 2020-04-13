#pragma once

#include <iostream>
#include <vector>
#include <cmath>

//�������f�����ǂ����𔻒肷��
bool isPrime(int n) {
  if (n < 2) return false;//2�����Ȃ�f���ł͂Ȃ�
  if (n == 2) return true;//2�͑f��

  for (int j = 2; j <= sqrt(n) + 1; ++j) {
    if (n % j == 0) return false;
  }
  return true;
}

//�������f�����ǂ����𔻒肷��iprimes�̍ő�l���傫���A�ő�l��2��ȉ��̐�����j
bool isPrime(int n, const std::vector<int>& primes) {
  for (int i : primes) {
    if (n % i == 0) return false;
  }
  return true;
}

//�v�f�̍ŏ��ƍŌ��10��\������
template<typename T>
void report(T first, T last) {
  const int num = 10;
  if (last - first < num) {//num�����Ȃ炷�ׂĕ\��
    for (T i = first; i != last; ++i) std::cout << *i << ", ";
  }
  else {
    for (T i = first; i != first + num; ++i) std::cout << *i << ", ";
    std::cout << std::endl;
    for (T i = last - num; i != last; ++i) std::cout << *i << ", ";
  }
  std::cout << std::endl;
}