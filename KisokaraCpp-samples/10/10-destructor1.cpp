#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct Person {
  string name;
  Person(const string& newName) : name(newName) {}
  ~Person() {
    cout << name << "�͉�̂��ꂽ\n";
  }
};

int main() {
  Person a1("Taro");                      //�����������ɍ\�z
  Person* pA2 = new Person("Jiro");       //�t���[�X�g�A�ɍ\�z
  Person* pA3 = new Person("Saburo");     //�t���[�X�g�A�ɍ\�z
  auto pA4 = make_shared<Person>("Shiro");//�t���[�X�g�A�ɍ\�z

  cout << a1.name << endl;  //�o�͒l�FTaro
  cout << pA2->name << endl;//�o�͒l�FJiro
  cout << pA3->name << endl;//�o�͒l�FSaburo
  cout << pA4->name << endl;//�o�͒l�FShiro

  delete pA2;//�I�u�W�F�N�g�̉��
  //delete pA3;��Y��Ă���B
}