#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;

  //�N���X��`�̒��Ń����o�֐����`����
  void show() {
    cout << name << " (" << age << ")\n";
  }
};

int main() {
  Person taro;
  taro.name = "Taro";
  taro.age = 32;
  taro.show(); //�o�͒l�FTaro (32)
}