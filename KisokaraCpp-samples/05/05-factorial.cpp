#include <iostream>
using namespace std;

int factorial(int n) {
  if (n < 2) return 1;        //�ċA�̏I������
  return n * factorial(n - 1);//�ċA�Ăяo��
}

int main() {
  //1����15�܂ł̐����̊K����v�Z����
  for (int n = 1; n <= 15; ++n) {
    cout << "f(" << n << ") = " << factorial(n) << endl;
  }
}