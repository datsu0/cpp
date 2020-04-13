#include <iostream>
#include <complex>
using namespace std;


int main() {
  using cplx = complex<double>;

  //�\��1
  cplx a;
  //cplx a();//NG
  //cplx a{};//OK
  cout << a << endl;//�o�͒l�F(0,0)

  //�\��2
  cplx b(3., 4.);
  //cplx b{ 3., 4. };//OK
  cout << b << endl;//�o�͒l�F(3,4)

  //�\��3
  cplx c(b);
  //cplx c{ b };//OK
  //cplx c = b;//OK
  cout << c << endl;//�o�͒l�F(3,4)

  cplx d;//���������Ă���
  d = b; //����i�����������j
  cout << d << endl;//�o�͒l�F(3,4)

  cout << b.real() << endl;//�o�͒l3
  cout << b.imag() << endl;//�o�͒l4
}