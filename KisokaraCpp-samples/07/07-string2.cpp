#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "Hello, ";
  string str2 = "World!";

  //4������
  cout << str1[4] << endl;//�o�͒l�Fo

  //�ǋL
  str1 += str2;
  cout << str1 << endl;//�o�͒l�FHello, World!

  //��r
  cout << (str1 == str2) << endl;//�o�͒l�F0�i�������Ȃ��j
  cout << str1.compare("Hello, Z!") << endl;//�o�͒l�F-1�istr1���������őO�j

  //�����i�O����j
  cout << str1.find("World") << endl;//�o�͒l�F7�i7�����ڂ�"World"������j
  if (str1.find("world") == string::npos) cout << "������Ȃ�\n";//�o�͒l�F������Ȃ�

  //�����i��납��j
  cout << str1.rfind("o") << endl;//�o�͒l�F8�i8�����ڂ�"o"������j

  //�u���i7�����ڂ����5������u��������j
  str1.replace(7, 5, "Nippon");
  cout << str1 << endl;//�o�͒l�FHello, Nippon!

  //����������i7�����ڂ���6���������o���j
  cout << str1.substr(7, 6) << endl;//�o�͒l�FNippon
}