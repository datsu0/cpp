#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outfile("test.txt", ios_base::app);//�ǋL���[�h�Ńt�@�C�����J��
  outfile << "�ǋL\n";
}