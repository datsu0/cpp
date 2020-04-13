#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> v{ {1, 2, 3}, {4, 5, 6 } };

  cout << v.size() << endl;   //�o�͒l�F2�i�s���j
  cout << v[0].size() << endl;//�o�͒l�F3�i�񐔁j

  cout << v[1][2] << endl;    //�o�͒l�F6�i1�s2�񂠂邢��1, 2�����j

  for (size_t i = 0; i < v.size(); ++i) {
    for (size_t j = 0; j < v[i].size(); ++j) {
      cout << v[i][j] << ", ";
    }
    cout << endl;
  }
  /*�o�͒l
  1, 2, 3,
  4, 5, 6,
  */

  for (const auto& row : v) {
    for (const auto& x : row) {
      cout << x << ", ";
    }
    cout << endl;
  }//�o�͒l�͏�Ɠ���
}