#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int& b = a;       //�Q�Ƃ̒�`
  b = 15;           //b�ɑ�������a�̒l���ς��
  cout << a << endl;//�o�͒l�F15
}