#include <iostream>
#include <regex>
using namespace std;

int main() {
  regex rx(R"(\d{3}-\d{4})");//���K�\���̒�`

  string zip = "153-0042";//"153-0042"���`�F�b�N
  if (regex_match(zip, rx)) cout << "OK\n";
  else cout << "NG\n";
  //�o�͒l�FOK

  zip = "194-00134";//"194-00134"���`�F�b�N
  if (regex_match(zip, rx)) cout << "OK\n";
  else cout << "NG\n";
  //�o�͒l�FNG
}