#include <iostream>
#include <string>
using namespace std;

int main() {
  //������������
  int x = 123456;
  string strx = to_string(x);
  cout << strx.size() << endl;//�o�͒l�F6

  //���������_����������
  double y = 2.718;
  string stry = to_string(y);
  cout << stry << endl;//�o�͒l�F2.718000;

  //�����񁨐���
  string stri = "123";
  int i = stoi(stri);
  cout << (i + 1) << endl;//�o�͒l�F124

  //�����񁨕��������_��
  string strd = "0.31415";
  double d = stod(strd);
  cout << (d * 10) << endl;//�o�͒l�F3.1415
}