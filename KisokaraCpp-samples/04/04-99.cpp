#include <iostream>
#include <iomanip>//setw()�̂��߂ɕK�v
using namespace std;

int main() {
  for (int i = 1; i < 10; ++i) {  //�s�𐔂���
    for (int j = 1; j < 10; ++j) {//��𐔂���
      cout << setw(3) << i * j;   //i*j��3�������ŕ\��
    }
    cout << endl;                 //1�s�������ɉ��s
  }
}