#include <iostream>
using namespace std;

int main() {
  cout << "��������͂��Ă��������iCtrl+Z�ŏI���j�B\n";
  int total = 0;
  int n;
  while (cin >> n) {
    total += n;//���͂��ꂽ�������Z���Ă���
  }
  cout << "���v��" << total << "�ł��B\n";
}