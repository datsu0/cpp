#include <iostream>
using namespace std;

struct A {
  void doSomething() { cout << "Hello, World!\n"; }

  ~A() { cout << "A�I�u�W�F�N�g�͉�̂��ꂽ\n"; }
};

struct Wrapper {
  A* pA;//Wrapper�̒��́A���łȂ��|�C���^
  Wrapper() : pA(new A) {}
  ~Wrapper() { delete pA; }
};

int main() {
  Wrapper w;
  return 1;//�����̒��f�̃V�~�����[�V����
  w.pA->doSomething();
}//�o�͒l�FA�I�u�W�F�N�g�͉�̂��ꂽ