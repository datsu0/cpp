#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;

  Person() {}//�����Ȃ��ƒ�`����Ȃ�

  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
};

int main() {
  Person people[5];//�f�t�H���g�R���X�g���N�^���K�v
  cout << end(people) - begin(people) << endl;//�o�͒l�F5

  Person taro("Taro", 32);//�R���X�g���N�^�̗��p
  cout << taro.name << " (" << taro.age << ")\n";//�o�͒l�FTaro (32)
}