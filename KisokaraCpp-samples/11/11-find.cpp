#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 1, 4 };

  int target = 6;
  auto pos = find(v.cbegin(), v.cend(), target);

  //�����Ȃ�*pos�ɃA�N�Z�X���Ă͂����Ȃ�
  //cout << *pos << endl;//���s���G���[����������댯����

  if (pos == v.cend()) {
    //�����̎����w���Ă���A�܂茩����Ȃ�����
    cout << "������Ȃ�\n";
  }
  else {
    //�����̎����w���Ă���A�܂茩������
    cout << *pos << endl;
  }
  //�o�͒l�F������Ȃ�
}