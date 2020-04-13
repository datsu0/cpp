#include <iostream>
#include <vector>
using namespace std;

void g1(vector<int> v) {
  v[0] = 100;//�p�����[�^�̕ύX
}

int g2(const vector<int>& v) {
  //v[0] = 10000;//�G���[�iv��const�j
  return v[0];
}

void g3(vector<int>& v) {
  v[0] = 1000;//�p�����[�^�̕ύX
}

auto h() {
  vector<int> v{ 11, 13, 17, 19 };
  return v;
}

int main() {
  vector<int> v1{ 2, 3, 5, 7 };

  g1(v1);
  cout << v1[0] << endl; //�o�͒l�F2�i�ς���Ă��Ȃ��j

  cout << g2(v1) << endl;//g2()��v1��ύX���Ȃ�

  g3(v1);
  cout << v1[0] << endl; //�o�͒l�F1000�ig3�ł̕ύX�����f���ꂽ�j

  auto v2(h());          //h()�ō\�z����vector���󂯎��
  //auto v2 = h();       //OK
  for (auto x : v2) cout << x << ", ";
  cout << endl;          //�o�͒l�F11, 13, 17, 19, 
}