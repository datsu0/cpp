#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream infile("test.txt");

  if (!infile) {//�t�@�C����������Ȃ��ꍇ�̏���
    cout << "�t�@�C����������Ȃ�\n";
  }
  else {//�t�@�C�������������ꍇ�̏���
    string line;
    while (getline(infile, line)) {
      cout << line << endl;
    }
  }
}