#include <iostream>
using namespace std;

[[noreturn]]//�߂�Ȃ����Ƃ����������i�K�{�ł͂Ȃ��B�j
void doSomething() noexcept {//��O�͔������Ȃ��Ƃ����錾
  while (1) {                //�ɂ�������炸��O����������B
    int* p = new int[0x1fffffff];
    cout << p << endl;
  }
  //���s�������I���i�R���p�C���G���[�ɂ͂Ȃ�Ȃ��j
}

int main() {
  try {
    doSomething();
  }
  catch (...) {//�C�ӂ̗�O�ɑΉ�����B
    cerr << "��O����\n";//�o�͂���Ȃ��B
  }
}