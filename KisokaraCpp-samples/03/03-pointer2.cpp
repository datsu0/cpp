#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int* pA = &a;         //a�ւ̃|�C���^
  int** ppA = &pA;      //pA�ւ̃|�C���^
  cout << **ppA << endl;//�o�͒l�F10
}