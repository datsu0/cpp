#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  double x = 0.1;
  stringstream ss;
  ss << setprecision(14) << hexfloat << x;
  string result1 = ss.str();
  cout << result1 << endl;
  //�o�͒l�F0x1.999999999999a0p-4

  double y = stod(result1);
  cout << (x == y ? "������" : "�������Ȃ�") << endl;
  //�o�͒l�F������
}