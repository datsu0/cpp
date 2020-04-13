#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;
  int age;
public:
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
  void eat() { cout << name << ": eat()\n"; }
  void show() { cout << name << " (" << age << ")\n"; }
};

class Student : public Person {
  int id;
public:
  Student(const string& newName, int newAge, int newId) : Person(newName, newAge), id(newId) {}
  void study() { cout << id << ": study()\n"; }
};

int main() {
  Student s("Hanako", 22, 1);
  s.show(); //�o�͒l�FHanako (22)
  s.eat();  //�o�͒l�FHanako: eat()
  s.study();//�����o�֐�study()�����̂�Student����
            //�o�͒l�F1: study()

  Person p("Taro", 32);
  p.show();//�o�͒l�FTaro (32)
  p.eat(); //�o�͒l�FTaro: eat()
  //p.study();//�G���[�i�����o�֐�study()��Person�̃����o�ł͂Ȃ��j
}