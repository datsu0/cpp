#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 1, 2, 3, 4, 5 };
  
  //�O���珇�Ԃɏ�������i�ύX�s�j
  for (auto i = v.cbegin(); i != v.end(); ++i) {
    //*i *= 10;//�G���[�ii��const�j
    cout << *i << ", ";
  }
  cout << endl;//�o�͒l�F1, 2, 3, 4, 5,

  //�O���珇�Ԃɏ�������i�ύX�j
  for (auto i = v.begin(); i != v.end(); ++i) {
    *i *= 10;
    cout << *i << ", ";
  }
  cout << endl;//�o�͒l�F10, 20, 30, 40, 50,

  for (auto i = v.crbegin(); i != v.crend(); ++i) {
    //*i *= 10;//�G���[�ii��const�j
    cout << *i << ", ";
  }
  cout << endl;//�o�͒l�F50, 40, 30, 20, 10,

  //��납�珇�Ԃɏ�������i�ύX�j
  for (auto i = v.rbegin(); i != v.rend(); ++i) {
    *i *= 10;
    cout << *i << ", ";
  }
  cout << endl;//�o�͒l�F500, 400, 300, 200, 100,
}