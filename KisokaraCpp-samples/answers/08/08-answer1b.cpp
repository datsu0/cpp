//�t�@�C���o�͂��g�����@
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outfile("numbers.dat");
  for (int i = 1; i <= 1000; ++i) {
    outfile << i << endl;
  }
}
/*
���̃v���O���������s����ƁA
C:/Users/���[�U��/Documents/Visual Studio 2015/Projects/ConsoleApplication1/ConsoleApplication1
�ɁA�ړI�̃t�@�C��numbers.dat���쐬�����B
*/