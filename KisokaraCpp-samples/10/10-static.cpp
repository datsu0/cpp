#include <iostream>
using namespace std;

struct A {
  int x;               //�f�[�^�����o
  void showX() {       //�����o�֐�
    cout << "x = " << x << endl;
  }
  static int s;        //�ÓI�f�[�^�����o
  static void showS() {//�ÓI�����o�֐�
    cout << "s = " << s << endl;
  }
};

//�ÓI�f�[�^�����o�́A�N���X��`�̊O�ŏ���������
int A::s = 5;//������ȗ������0�ɂȂ�

int main() {
  //�ÓI�����o�֐��̓I�u�W�F�N�g���Ȃ��Ă����p�ł���
  A::showS();//�o�͒l�Fs = 5

  A a1, a2;
  a1.x = 1;
  a2.x = 2;
  a1.s = 10; //a1.s�̕ύX��
  a2.showS();//a2.s�ɂ����f�����B�o�͒l�Fs = 10
  a2.showX();//a1.x��a2.x�͖��֌W�B�o�͒l�Fx = 2
}