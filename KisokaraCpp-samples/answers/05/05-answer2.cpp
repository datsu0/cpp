#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void mySwap(T& a, T& b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
void mySwap(T* a, T* b) {
  T tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int a = 1;
  int b = 2;

  mySwap(a, b);     //�Q�Ɣ�
  cout << a << endl;//�o�͒l�F2
  cout << b << endl;//�o�͒l�F1

  mySwap(&a, &b);   //�|�C���^��
  cout << a << endl;//�o�͒l�F1
  cout << b << endl;//�o�͒l�F2
}