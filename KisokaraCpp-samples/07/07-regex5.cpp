#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "abc,123 xyz";
  regex rx(R"(,|\s)");//�����Ɏg��������i�J���}�܂��͋󔒁j
  sregex_token_iterator it(str.begin(), str.end(), rx, -1);
  sregex_token_iterator end;
  while (it != end) {
    cout << *it++ << endl;//���o���āA���Ɉړ�
  }
  /*
  �o�͒l�F
  abc
  123
  xyz
  */
}