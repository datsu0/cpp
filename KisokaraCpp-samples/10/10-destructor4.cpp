#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct A {
  ~A() {
    cout << "A�I�u�W�F�N�g�͉�̂��ꂽ\n";
  }
};

struct Person {
  string name;
  shared_ptr<A> pA;

  //A�I�u�W�F�N�g���t���[�X�g�A�ɍ\�z����R���X�g���N�^
  Person(const string& newName) : name(newName), pA(new A) {}

  //A�I�u�W�F�N�g����̂���f�X�g���N�^
  ~Person() {
    //delete pA;//�s�v
    cout << name << "�͉�̂��ꂽ\n";
  }
};

int main() {
  Person a1("Taro");
  auto pA2 = make_shared<Person>("Jiro");
  //delete pA2;//�s�v
}