#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ {"one", 1}, {"two", 2}, {"three", 3 } };
  
  string target = "four";
  cout << dictionary.at(target) << endl;//��O����
  cout << "����I��\n";//�o�͂���Ȃ�
}