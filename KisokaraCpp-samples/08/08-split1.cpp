#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream datafile("test.dat");
  string label;
  int x, y, z;
  while (datafile >> label >> x >> y >> z) {   //�f�[�^��ǂݍ���
    cout << label << ": " << x + y + z << endl;//���x���ƍ��v��\��
  }
  datafile.close();
}