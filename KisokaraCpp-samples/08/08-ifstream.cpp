#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream infile("test.txt");
  string line;
  while (getline(infile, line)) {//�t�@�C���̏I���܂ŌJ��Ԃ�
    cout << line << endl;
  }
  infile.close();
}