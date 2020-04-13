#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
  Person() { cout << "constructor\n"; }
  Person(const Person& x) : name(x.name), age(x.age) { cout << "copy\n"; }
  Person(Person&& x) noexcept : name(move(x.name)), age(x.age) {
    cout << "move\n";
  }
  Person& operator=(const Person& x) noexcept {
    name = x.name;
    age = x.age;
    cout << "assign\n";
    return *this;
  }
};

Person f() {
  Person masato;
  masato.name = "Masato";
  masato.age = 0;
  return masato;
}

int main() {
  //�P�[�X1
  Person taro;
  taro.name = "Taro";
  taro.age = 32;

  //�P�[�X2
  Person A(taro);
  cout << A.name << endl;//�o�͒l�FTaro

  //�P�[�X3
  Person B;
  B = taro;
  cout << B.name << endl;//�o�͒l�FTaro

  //�P�[�X4
  Person C(f());
  cout << C.name << endl;//�o�͒l�FMasato
}