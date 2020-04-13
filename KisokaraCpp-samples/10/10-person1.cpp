#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string name;
  int age;
};

int main() {
  //������������Person�I�u�W�F�N�g���\�z
  Person taro;
  taro.name = "Taro";
  taro.age = 32;
  cout << taro.name << " (" << taro.age << ")\n";//�o�͒l�FTaro (32)

  //�����o�P�ʂ̏�����
  Person masato { "Masato", 0 };
  cout << masato.name << " (" << masato.age << ")\n";//�o�͒l�FMasato (0)

  //�����o�P�ʂ̏�����
  Person jiro {};
  cout << jiro.name << " (" << jiro.age << ")\n";//�o�͒l�F (0)

  //�t���[�X�g�A�ɃI�u�W�F�N�g���\�z
  Person* pHanako = new Person {"Hanako", 27};
  cout << pHanako->name << " (" << pHanako->age << ")\n";//�o�͒l�FHanako (27)
  delete pHanako;

  //Person�̔z��
  Person people[5];
  people[0].name = "Masato";
  people[0].age = 0;
  cout << people[0].name << " (" << people[0].age << ")\n";//�o�͒l�FMasato (0)

  //Person��vector
  vector<Person> vec;
  vec.emplace_back();//�v�f�̒ǉ��i6.1.3���j
  vec[0].name = "Hanako";
  vec[0].age = 27;
  cout << vec[0].name << " (" << vec[0].age << ")\n";//�o�͒l�FHanako (27)
}