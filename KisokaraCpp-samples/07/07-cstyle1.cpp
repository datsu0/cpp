#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char cstr[] = "hello";                      //C�X�^�C���̕�����
  cstr[0] = 'H';                              //�z��̗v�f�ɃA�N�Z�X����
  cout << cstr << endl;                       //�o�͒l�FHello
  size_t size = end(cstr) - begin(cstr);      //�v�f�������߂�
  //size_t size = sizeof(cstr) / sizeof(char);//OK
  cout << size << endl;                       //�o�͒l�F6�i5�ł͂Ȃ��j
  cout << strlen(cstr) << endl;               //�o�͒l�F5
}