#include <iostream>
using namespace std;

int fibonacci(int n) {
  int a;    //2�O�̐�
  int b = 1;//1�O�̐�
  int f = 1;//����
  for (int i = 3; i <= n; ++i) {
    a = b;
    b = f;
    f = a + b;
  }
  return f;
}

int main() {
  //10�Ԗڂ܂ł̃t�B�{�i�b�`�����v�Z����
  for (int n = 1; n <= 10; ++n) {
    cout << "f(" << n << ") = " << fibonacci(n) << endl;
  }
}