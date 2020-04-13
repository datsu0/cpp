#include <iostream>
#include <cmath>
#include <cfenv>
using namespace std;

void report_fexcepts() {
  if (fetestexcept(FE_DIVBYZERO)) cout << "FE_DIVBYZERO\n";
  if (fetestexcept(FE_INEXACT))   cout << "FE_INEXACT\n";
  if (fetestexcept(FE_OVERFLOW))  cout << "FE_OVERFLOW\n";
  if (fetestexcept(FE_UNDERFLOW)) cout << "FE_UNDERFLOW\n";
  if (fetestexcept(FE_INVALID))   cout << "FE_INVALID\n";
  std::feclearexcept(FE_ALL_EXCEPT);//�ُ�̗������N���A����B
  cout << endl;
}

int main() {
  double d;
  float f;

  d = 0;
  cout << 1.0 / d << endl;
  report_fexcepts();
  /*�o�͒l�F
  inf
  FE_DIVBYZERO
  */

  d = 1;
  for (int i = 0; i < 300; ++i) d *= 10;//d = 1e300;
  f = d;
  cout << f << endl;//�o�͒l�Finf
  report_fexcepts();
  /*�o�͒l�F
  inf
  FE_INEXACT
  FE_OVERFLOW
  */

  d = 1;
  for (int i = 0; i < 300; ++i) d /= 10;//d = 1e-300;
  f = d;
  cout << f << endl;
  report_fexcepts();
  /*�o�͒l�F
  0
  FE_INEXACT
  FE_UNDERFLOW
  */

  cout << sqrt(-1.0) << endl;
  report_fexcepts();
  /*�o�͗�F
  -nan(ind)
  FE_INVALID
  */
}