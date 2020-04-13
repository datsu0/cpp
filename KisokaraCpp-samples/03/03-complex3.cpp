#include <iostream>
#include <complex>
#include <memory>
using namespace std;

int main() {
  using cplx = complex<double>;

  shared_ptr<cplx> p = make_shared<cplx>();
  //auto p = make_shared<cplx>();//OK
  cout << *p << endl;//�o�͒l�F(0,0)

  shared_ptr<cplx> q = make_shared<cplx>(3., 4.);
  //auto q = make_shared<cplx>(3., 4.);//OK
  cout << *q << endl;//�o�͒l�F(3,4)

  shared_ptr<cplx> r = make_shared<cplx>(*q);
  //auto r = make_shared<cplx>(*q);//OK
  cout << *r << endl;//�o�͒l�F(3,4)
}//*p, *q, *r�͂����Ŏ����I�ɉ�̂����