#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n < 3) return 1;                       //�ċA�̏I������
  return fibonacci(n - 1) + fibonacci(n - 2);//�ċA�Ăяo��
}

int main() {
  //10�Ԗڂ܂ł̃t�B�{�i�b�`�����v�Z����
  for (int n = 1; n <= 10; ++n) {
    cout << "f(" << n << ") = " << fibonacci(n) << endl;
  }
}