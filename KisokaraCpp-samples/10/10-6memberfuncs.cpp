#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
};

//�I�u�W�F�N�g���\�z���ĕԂ��֐�
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
  Person A(taro);//�R�s�[
  //Person A = taro;//OK
  cout << A.name << endl;//�o�͒l�FTaro

  //�P�[�X3
  Person B;
  B = taro;
  cout << B.name << endl;//�o�͒l�FTaro

  //�P�[�X4
  Person C(f());
  //Person C = f();
  cout << C.name << endl;//�o�͒l�FMasato
}