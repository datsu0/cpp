#include <iostream>
using namespace std;

[[noreturn]]//�߂�Ȃ����Ƃ����������i�K�{�ł͂Ȃ��j
void doSomething() {
  //throw exception("�����ُ킪�N����");//Visual C++�ł�OK
  //throw exception();//OK
  throw runtime_error("�����ُ킪�N����");
}

int main() {
  try {
    doSomething();
  }
  catch (exception& e) {
    cerr << e.what() << endl;//�o�͒l�F�����ُ킪�N����
  }
}