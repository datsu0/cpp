#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1{ 2, 3, 5, 7 };
  auto v2(v1);
  //auto v2 = v1;//OK

  v1[0] = 100;//v1��ύX����B
  for (auto x : v2) cout << x << ", ";
  cout << endl;//�o�͒l�F2, 3, 5, 7 �iv2�͕ς���Ă��Ȃ��j
}