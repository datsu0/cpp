#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "���̗X�֔ԍ���194-0013�A�ޏ��̗X�֔ԍ���153-0042�ł��B";
  regex rx(R"((\d{3})-(\d{4}))");
  string tmp = "$1";//1�Ԗڂ̊��ʂ̒��������o��
  cout << regex_replace(str, rx, tmp) << endl;
  //�o�͒l�F���̗X�֔ԍ���194�A�ޏ��̗X�֔ԍ���153�ł��B
}