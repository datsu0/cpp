#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str = "Hello, World!";

  //[]���g���ꍇ
  for (int i = str.size() - 1; i >= 0; --i) cout << str[i];
  cout << endl;

  //�����q���g���ꍇ
  for (auto i = str.crbegin(); i != str.crend(); ++i) cout << *i;
  cout << endl;

  //�A���S���Y�����g���ꍇ
  reverse(str.begin(), str.end());
  cout << str << endl;

  //�o�͒l�F!dlroW ,olleH
}