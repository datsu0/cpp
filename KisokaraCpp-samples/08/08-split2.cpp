#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main() {
  ifstream datafile("test.dat");
  regex rx(R"(\s)");              //�����̂��߂̐��K�\��
  string str;                     //�s���i�[���邽�߂̕ϐ�
  while (getline(datafile, str)) {//1�s���ǂݍ���
    sregex_token_iterator it(str.begin(), str.end(), rx, -1);
    sregex_token_iterator end;
    string label = *it++;  //�ŏ��̓��x��
    int total = 0;         //���v���v�Z���邽�߂̕ϐ�
    while (it != end) {
      total += stoi(*it++);//������𐮐��ɕϊ�����
    }
    cout << label << ": " << total << endl;
  }
  datafile.close();
}