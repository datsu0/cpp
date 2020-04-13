#include <iostream>
using namespace std;

void f1(int x)         { cout << ++x      << endl; }//x�͈����̃R�s�[

void f2(const int x)   { cout << x + 1    << endl; }//x�͈����̃R�s�[�i�ύX�s�j

void f3(int& x)        { cout << ++x      << endl; }//x�͈����̎Q��

void f4(const int& x)  { cout << x + 1    << endl; }//x�͈����̎Q�Ɓi�ύX�s�j

void f5(int&& x)       { cout << ++x      << endl; }//x�͈����̉E�Ӓl�Q��

void f6(const int&& x) { cout << x + 1    << endl; }//x�͈����̉E�Ӓl�Q�Ɓi�ύX�s�j

void f7(int* p)        { cout << ++(*p)   << endl; }//p��int�^�ϐ��̃A�h���X�̃R�s�[

void f8(const int* p)  { cout << (*p) + 1 << endl; }//p��int�^�ϐ��̃A�h���X�̃R�s�[�i*p�͕ύX�s�j

int main() {
  int x1 = 100;
  f1(x1);                    //�o�͒l�F101
  cout << x1 << endl;        //�o�͒l�F100�i�ς���Ă��Ȃ��j
  f1(110);                   //�o�͒l�F111�i���e������OK�j

  int x2 = 200;
  f2(x2);                    //�o�͒l�F201
  cout << x2 << endl;        //�o�͒l�F200�i�ς���Ă��Ȃ��j
  f2(210);                   //�o�͒l�F211�i���e������OK�j

  int x3 = 300;
  f3(x3);                    //�o�͒l�F301
  cout << x3 << endl;        //�o�͒l�F301�i�ς���Ă���j
  //f3(310);                 //�G���[�i���e������NG�j

  int x4 = 400;
  f4(x4);                    //�o�͒l�F401
  cout << x4 << endl;        //�o�͒l�F400�i�ς���Ă��Ȃ��j
  f4(410);                   //�o�͒l�F411�i���e������OK�j

  int x5 = 500;
  f5(static_cast<int&&>(x5));//�o�͒l�F501
  cout << x5 << endl;        //�o�͒l�F501�i�ς���Ă���j
  f5(510);                   //�o�͒l�F511�i���e������OK�j

  int x6 = 600;
  f6(static_cast<int&&>(x6));//�o�͒l�F601
  cout << x6 << endl;        //�o�͒l�F600�i�ς���Ă��Ȃ��j
  f6(610);                   //�o�͒l�F611�i���e������OK�j

  int x7 = 700;
  f7(&x7);                   //�o�͒l�F701
  f7(addressof(x7));         //�o�͒l�F702
  cout << x7 << endl;        //�o�͒l�F702�i�ς���Ă���j
  //f7(nullptr);             //���s���G���[�i���e������OK�����j
  
  int x8 = 800;
  f8(&x8);                   //�o�͒l�F801
  f8(addressof(x8));         //�o�͒l�F801
  cout << x8 << endl;        //�o�͒l�F800�i�ς���Ă��Ȃ��j
  //f8(nullptr);             //���s���G���[�i���e������OK�����j
}