#include <iostream>
#include <string>
using namespace std;

void report(const char* cstr) {          //�T�C�Y�͕s�v
  for (int i = 0; cstr[i] != '\0'; i++) {//������̏I��肪�킩��
    cout << '[' << i << "]: " << cstr[i] << endl;
  }
}

int main() {
  char cstr1[] = "hello";
  //C�X�^�C���������std::string�ɕϊ�����
  string str = cstr1;        //cstr1���g����std::string���`����
  cout << str.size() << endl;//�o�͒l�F5
  
  //std::string��C�X�^�C��������ɕϊ�����
  const char* cstr2 = str.c_str();
  report(cstr2);//�o�͒l�F07-cstyle2.cpp�̌��ʂƓ���
}