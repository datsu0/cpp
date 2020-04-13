#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "���̗X�֔ԍ���194-0013�A�ޏ��̗X�֔ԍ���153-0042�ł��B";
  regex rx(R"(\d+)");
  sregex_iterator it(str.begin(), str.end(), rx);//����������̌���
  sregex_iterator end;
  while (it != end) {
    cout << it++->str() << endl;//���o���āA���Ɉړ�
  }
  /*
  �o�͒l�F
  194
  0013
  153
  0042
  */
}