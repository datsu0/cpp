#include <iostream>
#include <string>
using namespace std;

struct A {
  ~A() {
    cout << "A�I�u�W�F�N�g�͉�̂��ꂽ\n";
  }
};

struct Person {
  string name;
  A a; //A�I�u�W�F�N�g�������o�Ɏ���
  Person(const string& newName) : name(newName) {}

  ~Person() {
    cout << name << "�͉�̂��ꂽ\n";
  }
};

int main() {
  Person a1("Taro");
  Person* pA2 = new Person("Jiro");
  delete pA2;
}