#include <iostream>
#include <fstream>//ofstream�̂��߂ɕK�v
using namespace std;

int main() {
  ofstream outfile("test.txt", ios_base::out);
  //ofstream outfile("test.txt");//OK
  outfile << "�������\n";
  outfile << "�t�@�C���ɏ�������" << endl;
  outfile.close();//�t�@�C�������i�����ł͕s�v�j
}