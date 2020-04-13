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

  //�R�s�[������Z�q
  Person& operator=(const Person& x) {
    if (this != &x) {                //���ӂ������Ȃ牽�����Ȃ�
      auto tmp = new string(*x.name);//���Ƃ�name���R�s�[���ăA�h���X���擾����
      delete name;                   //�Â�name����̂���
      name = tmp;                    //�V�����A�h���X��ۑ�����
      age = x.age;
    }
    return *this;
  }
};

int main() {
  Person taro;
  *taro.name = "Taro";
  taro.age = 32;

  Person A;
  A = taro;

  *taro.name = "Jiro";
  cout << *A.name << " (" << A.age << ")\n";//�o�͒l�FTaro (32)
}