#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "���������͂��āAEnter�L�[�������Ă��������iCtrl+Z�ŏI���j�B\n";
  string str;
  while (cin >> str) {//Ctrl+Z�����͂����܂ŌJ��Ԃ�
    cout << "���͂��ꂽ������́u" << str << "�v�ł��B\n";
  }
  cout << "�I�����܂����B\n";
}