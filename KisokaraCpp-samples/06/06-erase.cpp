#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 7 };

  v.pop_back();//�����̍폜
  for (auto x : v) cout << x << ", ";
  cout << endl;//�o�͒l�F2, 3, 5, 

  v.erase(v.begin() + 1);//1�Ԗڂ̗v�f�̍폜
  for (auto x : v) cout << x << ", ";
  cout << endl;//�o�͒l�F2, 5, 
}