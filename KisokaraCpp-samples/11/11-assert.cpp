#include <iostream>
#include <cassert>//assert�̂��߂ɕK�v

int main() {
  int low, mid, high;

  //���炩�̗��R��mid > high�ɂȂ��Ă��܂����Ƃ���
  low = 0;
  mid = 10;
  high = 5;

  assert(low <= mid && mid <= high);
  std::cout << "����I��\n";//�o�͂���Ȃ�
}