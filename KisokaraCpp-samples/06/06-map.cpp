#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ { "one", 0 },{ "two", 2 },{ "three", 3 } };
  //{ "one", 0 }�͌��{ "one", 1 }�ɏC������B

  cout << dictionary["two"] << endl;//�o�͒l�F2

  dictionary["one"] = 1;//�l�̍X�V

  //���݂��Ȃ��L�[���g���ƋK��l�i���̏ꍇ��0�j�Ń}�b�v�ɓo�^�����
  cout << dictionary["four"] << endl;//�o�͒l�F0

  //�������邾���Ȃ�v�f���o�^����邱�Ƃ͂Ȃ�
  if (dictionary.find("five") == dictionary.end()) cout << "not found\n";
  //�o�͒l�Fnot found

  dictionary["five"] = 5;//�y�A�̒ǉ�

  //unordered_map�ɂ��Ẵ��[�v
  for (const auto& p : dictionary) {
    cout << p.first << ": " << p.second << endl;
  }
  /*
  �o�͗�F
  one: 1
  two: 2
  three: 3
  five: 5
  four: 0
  */
}