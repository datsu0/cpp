#include <iostream>
using namespace std;

int x;//�O���[�o���ϐ��i�O���[�o�����O��ԁj

namespace nameA {
  int x = 1;
}

namespace nameB {
  int x = 2;
}

int main() {
  int x = 3;
  cout << x << endl;       //�o�͒l�F3�i���[�J���ϐ��j
  cout << ::x << endl;     //�o�͒l�F0�i�O���[�o�����O��ԁj
  cout << nameA::x << endl;//�o�͒l�F1�i���O���nameA�j
  cout << nameB::x << endl;//�o�͒l�F2�i���O���nameB�j
}