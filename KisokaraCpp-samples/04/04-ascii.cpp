#include <iostream>
using namespace std;

int main() {
  cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";//1�s��
  cout << "-|--------------------------------\n";//2�s��

  //3�s�ڈȍ~
  char ch = 0x20;                 //�\�̍ŏ��̕����i���p�X�y�[�X�j
  for (int i = 2; i <= 7; ++i) {  //�s������
    cout << i << '|';             //16�̈ʂ�\��
    for (int j = 0; j < 16; ++j) {//�������
      cout << ' ' << ch++;        //������\�����Ach���C���N�������g����
    }
    cout << endl;                 //1�s�������Ɖ��s
  }
}