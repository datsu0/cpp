#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  for (int i = 0; i < argc; ++i) {
    cout << "argv[" << i << "]: " << argv[i] << endl;
  }
  //�R�}���h���C��������2�ȏ�Ȃ琳��I�����邱�Ƃɂ���
  if (2 <= argc) return 0;
  else return 1;
}