#include <iostream>
#include <unordered_map>
#include <complex>
#include <string>
using namespace std;

using cplx = complex<double>;

//cplx���L�[�ɂ��邽�߂̃n�b�V���֐����`����
namespace std {
  template<>
  struct hash<cplx> {
    size_t operator()(const cplx& z) const {
      size_t h1 = hash<double>()(z.real());
      size_t h2 = hash<double>()(z.imag());
      return  h1 ^ h2;
    }
  };
}

int main() {
  //�l��cplx�ɂ���ꍇ
  unordered_map<string, cplx> dic1;

  cplx z(3., 4.);
  dic1["A"] = z;//�R�s�[

  dic1["B"] = cplx(5., 12.);//���[�u

  dic1.emplace("C", 10);//dic["C"] = cplx(10., 0.);�Ɠ������ʂɂȂ�

  dic1.emplace(piecewise_construct, forward_as_tuple("D"), forward_as_tuple(8., 15.));

  for (const auto& p : dic1) {
    cout << p.first << ": " << p.second << endl;
  }
  /* �o�͗�F
  A: (3,4)
  B: (5,12)
  C: (10,0)
  D: (8,15)
  */


  //�L�[��cplx�ɂ���ꍇ
  unordered_map<cplx, int> dic2;//��`�\

  dic2[cplx(1, 2)] = 1;         //�X�V�\
  dic2[cplx(3, 4)] = 2;

  for (const auto& p : dic2) {
    cout << p.first << ", " << p.second << endl;
  }
  /* �o�͗�F
  (1,2), 1
  (3,4), 2
  */
}