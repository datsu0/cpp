#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "OK? (y/n) ";
  string str;
  cin >> str;
  if (str == "y") cout << "y�����͂���܂����B\n";
  else if (str == "n") cout << "n�����͂���܂����B\n";
  else cout << "�s���ȓ��͂ł��B\n";
}