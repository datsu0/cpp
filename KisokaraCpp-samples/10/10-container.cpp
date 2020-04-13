#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

struct Person {
  string name;
  int age;
  Person() = default;
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}

  //���������ǂ����𒲂ׂ鉉�Z�q
  bool operator==(const Person& p) const {
    return name == p.name && age == p.age;
  }
};

//�召�֌W�����߂鉉�Z�q
bool operator<(const Person& lhs, const Person& rhs) {
  return lhs.name < rhs.name;
}

//�n�b�V���̌v�Z
namespace std {
  template<>
  struct hash<Person> {
    size_t operator()(const Person& p) const {
      return hash<string>()(p.name) ^ hash<int>()(p.age);
    }
  };
}

int main() {
  vector<Person> people(5);//�f�t�H���g�R���X�g���N�^��5��Ă΂��

  vector<Person> peopleVec;//���vector�ɒǉ�����
  Person taro("Taro", 32);
  peopleVec.push_back(taro);           //�R�s�[
  peopleVec.emplace_back("Hanako", 27);//�\�z���Ē��ڒǉ�
  peopleVec.emplace_back("Masato", 0);

  sort(peopleVec.begin(), peopleVec.end());
  for (auto& p : peopleVec) cout << p.name << ", ";
  cout << endl;//�o�͒l�FHanako, Masato, Taro,

  set<Person> peopleSet;
  peopleSet.emplace("Taro", 32);
  peopleSet.emplace("Hanako", 27);
  peopleSet.emplace("Masato", 0);
  for (auto& p : peopleSet) cout << p.name << ", ";
  cout << endl;//�o�͒l�FHanako, Masato, Taro,

  unordered_set<Person> peopleUSet;
  peopleUSet.emplace("Taro", 32);
  peopleUSet.emplace("Hanako", 27);
  peopleUSet.emplace("Masato", 0);
  for (auto& p : peopleUSet) cout << p.name << ", ";
  cout << endl;//�o�͗�FTaro, Hanako, Masato,
}