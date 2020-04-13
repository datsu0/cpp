#include <iostream>
#include <complex>
using namespace std;


int main() {
  using cplx = complex<double>;

  //�\��4
  cplx* p = new cplx;
  //cplx* p = new cplx();//OK
  //cplx* p = new cplx{};//OK
  cout << *p << endl;//�o�͒l�F(0,0)

  //�\��5
  cplx* q = new cplx(3., 4.);
  //cplx* q = new cplx{ 3., 4. };//OK
  cout << *q << endl;//�o�͒l�F(3,4)

  //�\��6
  cplx* r = new cplx(*q);
  //cplx* r = new cplx{ *q };//OK
  cout << *r << endl;//�o�͒l�F(3,4)

  cout << (*q).real() << endl;//�o�͒l3�i�璷�j
  cout << (*q).imag() << endl;//�o�͒l4�i�璷�j

  cout << q->real() << endl;//�o�͒l3
  cout << q->imag() << endl;//�o�͒l4

  delete p;
  delete q;
  delete r;
}