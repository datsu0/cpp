#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "Hello";
  //string str1("Hello");//OK
  cout << str1 << endl;//�o�͒l�FHello

  string str2;//�󕶎���
  
  //�R�s�[���
  str2 = str1;
  cout << str2 << endl;//�o�͒l�FHello

  //������̌���1�istring + �����񃊃e�����j
  str2 = str1 + ", World!";
  cout << str2 << endl;//�o�͒l�FHello, World!

  //������̌���2�i�����񃊃e���� + string�j
  str2 = "ABCDEFG " + str1;
  cout << str2 << endl;//�o�͒l�FABCDEFG Hello

  //������̌���3�istring + string�j
  cout << (str1 + str2) << endl;//�o�͒l�FHelloABCDEFG Hello

  //������̌���4�i�����񃊃e���� + �����񃊃e�����j
  //cout << ("Hello, " + "World!") << endl;//�G���[
}