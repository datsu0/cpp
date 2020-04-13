#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string* name;
  int age;
  vector<int> vec;
  Person() : name(new string) {}
  ~Person() { delete name; }

  //�R�s�[�R���X�g���N�^�i�����j
  //�R�s�[������Z�q�i�����j
  //���[�u�R���X�g���N�^�i�����j

  //���[�u������Z�q
  Person& operator=(Person&& x) noexcept {
    cout << "moved\n";
    if (this != &x) {//���ӂ������Ȃ牽�����Ȃ�
      delete name;
      name = x.name;
      x.name = nullptr;
      age = x.age;
      vec = move(x.vec);
    }
    return *this;
  }
};

struct Wrapper {
  Person person;
  //��{�����o�֐��͈ÖٓI�ɒ�`����邱�Ƃ����҂���
};

int main() {
  Wrapper w1, w2;
  *w1.person.name = "Taro";
  w2 = move(w1);
  cout << *w2.person.name << endl;//�o�͒l�FTaro
}