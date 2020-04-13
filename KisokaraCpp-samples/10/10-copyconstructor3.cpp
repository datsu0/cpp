#include <iostream>
#include <string>
using namespace std;

struct Person {
  string* name;
  int age;
  Person() : name(new string) {}
  ~Person() { delete name; }

  //�R�s�[�R���X�g���N�^
  Person(const Person& x) : name(new string(*(x.name))), age(x.age) {}
};

int main() {
  Person taro;
  *taro.name = "Taro";
  taro.age = 32;

  Person A(taro);
  cout << *A.name << " (" << A.age << ")\n";//�o�͒l�FTaro (32)

  *taro.name = "Jiro";
  cout << *A.name << " (" << A.age << ")\n";//�o�͒l�FTaro (32)
}