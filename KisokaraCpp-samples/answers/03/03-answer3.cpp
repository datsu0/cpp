#include <iostream>
#include <complex>
#include <memory>
using namespace std;

int main() {
  using cplx = complex<double>;

  auto z = make_shared<cplx>(5., 10.);
  cout << z->real() << endl;//凃R力�
  cout << abs(*z) << endl;  //凃R力�1.1803
}