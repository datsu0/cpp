#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int* pA = &a;          //�|�C���^��a�̃A�h���X�ŏ�����
  //int* pA = addressof(a);//OK
  *pA = 20;              //�|�C���^���g����a�̒l�ɃA�N�Z�X
  cout << a << endl;     //�o�͒l�F20
}