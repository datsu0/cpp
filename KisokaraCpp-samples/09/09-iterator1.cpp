#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec(5);//�v�f��5�̃x�N�^�i�v�f�͂��ׂ�0�j

  //�Y���̗��p
  vec[2] = 102;
  //vec[5] = 105;//�͈͊O�ւ̃A�N�Z�X�i�^���悯��Ύ��s���G���[�j

  //�����o�֐�at()�̗��p
  vec.at(1) = 101;
  //vec.at(5) = 105;//�͈͊O�ւ̃A�N�Z�X�B�Ώ��@����i�����j

  //�|�C���^�̗��p
  int* p = &vec[0];
  *p = 100;
  *(p + 3) = 103;

  //�����q�̗��p
  auto it = vec.begin();//�擪�v�f���w�������q
  *(it + 4) = 104;

  //���ׂĂ̗v�f�̕\��
  for (auto i = vec.begin(); i != vec.end(); ++i) {
    cout << *i << ", ";
  }
  cout << endl;//�o�͒l�F100, 101, 102, 103, 104,
}