#include <iostream>
using namespace std;

int main() {
  try {
    while (1) {//�������[�v
      int* p = new int[0x1fffffff];//�傫�Ȕz��̊m��
      cout << p << endl;
    }
  }
  catch (bad_alloc& e) {
    cerr << e.what() << endl;//�o�͗�Fbad allocation
  }
}