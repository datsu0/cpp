#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
  string name;
  int age;
public:
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
  void eat() { cout << "eat()\n"; }
  virtual void show();
  virtual ~Person() {}//���z�f�X�g���N�^�i��q�j
};

void Person::show() { cout << name << " (" << age << ")\n"; }

class Student : public Person {
  int id;
public:
  Student(const string& newName, int newAge, int newId) : Person(newName, newAge), id(newId) {}
  void study() { cout << name << " (id:" << id << "): study()\n"; }
  void show() override;
};

void Student::show() {//�����o�֐�show()�̃I�[�o�[���C�h
  cout << id << ": " << name << " (" << age << ")\n";
}

int main() {
  Person p("Taro", 32);
  p.show();//�o�͒l�FTaro (32)

  Student s("Hanako", 22, 1);
  s.show();//�o�͒l�F1: Hanako (22)

  //Person*�̔z���2�̃I�u�W�F�N�g�̃A�h���X���i�[����
  Person* people[2] = { &p, &s };
  for (auto person : people) {
    person->show();
  }
  //�o�͒l�FTaro (32)
  //�o�͒l�F1: Hanako (22)
}