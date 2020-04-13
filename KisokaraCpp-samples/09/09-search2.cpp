#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v = { 503, 87, 512, 61, 908, 170, 897, 275, 200, 426 };

  //�񕪒T���̂��߂ɂ́A�܂����בւ����K�v
  sort(v.begin(), v.end());

  auto begin = v.cbegin();
  auto end = v.cend();

  int target = 200;//200��񕪒T���ŒT��
  auto pos = lower_bound(begin, end, target);
  //�T�������l���ǂ����̊m�F
  if (pos == end || *pos != target) cout << "������Ȃ�\n";
  else cout << "���������F" << *pos << endl;
  //�o�͒l�F���������F200

  target = 404;//404��񕪒T���ŒT��
  pos = lower_bound(begin, end, target);
  //�T�������l���ǂ����̊m�F
  if (pos == end || *pos != target) cout << "������Ȃ�\n";
  else cout << "���������F" << *pos << endl;
  //�o�͒l�F������Ȃ�
}