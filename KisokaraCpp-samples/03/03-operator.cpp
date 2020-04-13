#include <iostream>
using namespace std;

int main() {
  //�Z�p���Z�q
  cout << (10 / 4) << endl;//�o�͒l�F2
  cout << (1 / 3)  << endl;//�o�͒l�F0
  cout << (10 % 4) << endl;//�o�͒l�F2

  cout << (1 + 2 * 3) << endl;//�o�͒l�F7

  cout << ((1 + 2) * 3) << endl;//�o�͒l�F9

  cout << (1 / 3) << endl;  //�o�͒l�F0
  cout << (1 / 3.0) << endl;//�o�͒l�F0.333333

  //��r���Z�q
  cout << (1 < 2) << endl;//�o�͒l�F1�itrue���Ӗ�����j
  cout << (3 < 2) << endl;//�o�͒l�F0�ifalse���Ӗ�����j

  //�_�����Z�q
  cout << (1 < 2 && 2 < 3) << endl;//�o�͒l�F1�itrue���Ӗ�����j
  cout << (1 < 2 && 3 < 2) << endl;//�o�͒l�F0�ifalse���Ӗ�����j
  cout << (2 < 1 || 1 < 2) << endl;//�o�͒l�F1�itrue���Ӗ�����j
  cout << (!(2 < 1))       << endl;//�o�͒l�F1�itrue���Ӗ�����j

  cout << (1 < 2 && 0) << endl;//�o�͒l�F0�ifalse���Ӗ�����j
  cout << (0 || 1 < 2) << endl;//�o�͒l�F1�itrue���Ӗ�����j

  //�r�b�g���Z�q
  int a = 5, b = 3;//2�i����101��011
  cout << (a & b) << endl;//�o�͒l�F 1�i�r�b�g���Ƃ̘_���ρj
  cout << (a | b) << endl;//�o�͒l�F 7�i�r�b�g���Ƃ̘_���a�j
  cout << (a ^ b) << endl;//�o�͒l�F 6�i�r�b�g���Ƃ̔r���I�_���a�j
  cout << (~a)    << endl;//�o�͒l�F-6�i1�̕␔�܂�r�b�g���Ƃ̔ے�j

  int c = 5;//2�i����101
  cout << (c >> 1) << endl;//�o�͒l�F 2�i101���E��1�r�b�g�V�t�g�����10�ɂȂ�j
  cout << (c >> 2) << endl;//�o�͒l�F 1�i101���E��2�r�b�g�V�t�g�����1�ɂȂ�j
  cout << (c << 1) << endl;//�o�͒l�F10�i101������1�r�b�g�V�t�g�����1010�ɂȂ�j
  cout << (c << 2) << endl;//�o�͒l�F20�i101������2�r�b�g�V�t�g�����10100�ɂȂ�j

  //������Z�q
  int d = 0;
  cout << (d = 5) << endl;//�o�͒l�F5�i���Z�q�̕]�����ʁj
  cout << d       << endl;//�o�͒l�F5�i���Z�q�̕���p�j

  int e, f;
  cout << (e = f = 5) << endl;//�o�͒l�F5�i���Z�q�̕]�����ʁj
  cout << e << endl;          //�o�͒l�F5
  cout << f << endl;          //�o�͒l�F5

  int g = 0;
  g = 1.;//�x���u'=' : 'double' ���� 'int' �ւ̕ϊ��ł��B�f�[�^��������\��������܂��B�v
  cout << g << endl;//�o�͒l�F1

  int h = 0;
  h = static_cast<int>(1.);//�x���͏o�Ȃ�
  //h = (int)1.;//OK
  //h = int(1.);//OK
  cout << h << endl;//�o�͒l�F1

  int i = 5;
  i += 5;
  cout << i << endl;//�o�͒l�F10

  //�C���N�������g�ƃf�N�������g
  int j = 5, k = 5;

  cout << (j++) << endl;//�o�͒l�F5
  cout << j << endl;    //�o�͒l�F6

  cout << (++k) << endl;//�o�͒l�F6
  cout << k << endl;    //�o�͒l�F6

  //�������Z�q�ƃR���}���Z�q
  cout << (2 < 1 ? "ABC" : "DEF") << endl;//�o�͒l�FDEF

  int m = 0;
  cout << (m = 1, m + 2) << endl;//�o�͒l�F3

  //�퉉�Z�q�̕]������
  int n = 1;
  n = --n / --n;
  cout << n << endl;
}