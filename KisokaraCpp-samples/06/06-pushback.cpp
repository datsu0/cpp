#include <iostream>
#include <vector>
#include <complex>
using namespace std;

using cplx = complex<double>;

int main() {
  vector<cplx> v;

  cplx z(3., 4.);//�I�u�W�F�N�g�̍\�z
  v.push_back(z);//�v�f�̒ǉ��i�R�s�[�j

  v.push_back(cplx(1., 2.));//�I�u�W�F�N�g�̈ړ�
  v.emplace_back(1., 2.);   //OK

  for (auto x : v)  cout << x << ", ";
  cout << endl;//�o�͒l�F(3,4), (1,2), (1,2),
}