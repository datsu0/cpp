#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1; //���vector���\�z����
  v1.push_back(2);//�v�f��ǉ����Ă���
  v1.push_back(3);
  v1.push_back(5);
  v1.push_back(7);

  vector<int> v2(4);//�v�f��4��vector���\�z����
  v2[0] = 2;        //�v�f��ύX���Ă���
  v2[1] = 3;
  v2[2] = 5;
  v2[3] = 7;

  vector<int> v3{ 2, 3, 5, 7 };//�v�f�𖾎�����vector������������

  cout << (v1 == v2 ? "������" : "�������Ȃ�") << endl;//�o�͒l�F������
  cout << (v1 == v3 ? "������" : "�������Ȃ�") << endl;//�o�͒l�F������
}