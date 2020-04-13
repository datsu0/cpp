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
  A* pA;

  //A�I�u�W�F�N�g���t���[�X�g�A�ɍ\�z����R���X�g���N�^
  Person(const string& newName) : name(newName), pA(new A) {}

  //A�I�u�W�F�N�g����̂���f�X�g���N�^
  ~Person() {
    delete pA;
    cout << name << "�͉�̂��ꂽ\n";
  }
};

int main() {
  Person a1("Taro");
  Person* pA2 = new Person("Jiro");
  delete pA2;
}