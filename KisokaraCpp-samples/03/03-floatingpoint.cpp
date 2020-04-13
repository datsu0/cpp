#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
  double x = 0.1;
  double y = x + x + x + x + x + x + x + x + x + x;
  cout << (x == 1.) << endl;//�o�͒l�F0�i�������Ȃ��j

  cout << setprecision(20);//�����_�ȉ�20���܂ŕ\������
  cout << y << endl;       //�o�͒l�F0.99999999999999988898

  cout << x << endl;//�o�͒l�F0.10000000000000000555

  cout << hexfloat;    //16�i���ŕ\������
  cout << x << endl;   //�o�͒l�F0x1.999999999999a0000000p-4
  cout << defaultfloat;//���ɖ߂��i10�i���ŕ\������j

  double z = stod("0x1.999999999999ap-4");           //�������double�ɕϊ�����
  //double z = 0x1.999999999999ap-4;                 //GNU C++��Clang�̂�
  cout << (x == z ? "������" : "�������Ȃ�") << endl;//�o�͒l�F������

  double epsilon = 1e-10;
  cout << (abs(y - 1.) < epsilon ? "������" : "�������Ȃ�") << endl;
  //�o�͒l�F������

  double a = 9007199254740992;
  double b = a + 1;
  cout << (a == b ? "������" : "�������Ȃ�") << endl;//�o�͒l�F������
}