#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n = 123;
  cout << '[' << setw(5) << n << ']' << endl;//�o�͒l�F[  123]�i5���\���j
  cout << '[' << n << ']' << endl;           //�o�͒l�F[123]�@�i���ɖ߂�j

  double x = 1. / 7.;
  cout << x << endl;       //�o�͒l�F0.142857�i�W����6���\���j
  cout << setprecision(10);//10���\���ɕύX����
  cout << x << endl;       //�o�͒l�F0.1428571429
  cout << setprecision(6); //6���\���ɖ߂�
}