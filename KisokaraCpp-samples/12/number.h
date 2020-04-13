#pragma once

#include <iostream>

//�������f�����ǂ����𔻒肷��
bool isPrime(int n) {
  if (n < 2) return false;//2�����Ȃ�f���ł͂Ȃ�
  if (n == 2) return true;//2�͑f��

  for (int j = 2; j < n; ++j) {
    if (n % j == 0) return false;//2�ȏ�n�����̐��Ŋ���؂ꂽ��f���ł͂Ȃ�
  }
  return true;
}

//�v�f�̍ŏ��ƍŌ��5��\������
template<typename T>
void report(T first, T last) {
  const int num = 5;
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