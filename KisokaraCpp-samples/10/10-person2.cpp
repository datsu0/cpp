#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
  void show();//�����o�֐��̐錾
};

//�����o�֐��̒�`
void Person::show() {
  cout << name << " (" << age << ")\n";
}

int main() {
  Person taro { "Taro", 32 };
  taro.show();//�o�͒l�FTaro (32)

  Person* pHanako = new Person { "Hanako" , 27};
  pHanako->show();//�o�͒l�FHanako (27)
  delete pHanako;
}