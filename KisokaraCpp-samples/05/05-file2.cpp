#include <iostream>
using namespace std;

void f();//�֐�f()�̐錾�̂݁B��`�͕ʂ̃t�@�C���ɂ���

int main() {
  extern int x;     //�ʂ̃t�@�C���Œ�`����Ă���ϐ��𗘗p����
  cout << x << endl;//�o�͒l�F10
  f();              //�o�͒l�FHello, World!
}