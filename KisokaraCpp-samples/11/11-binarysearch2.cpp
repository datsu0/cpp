#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

template<typename T>
size_t binarySearch(T key, const vector<T>& v) {
  if (!is_sorted(v.cbegin(), v.cend())) {
    throw runtime_error("��O�F�\�[�g����Ă��Ȃ�");
  }
  int n = v.size();
  int low = 0;
  int high = n - 1;
  int mid;
  while (low <= high) {
    mid = (low + high) / 2;
    cout << low << ", " << mid << ", " << high << endl;
    assert(low <= mid && mid <= high);
    if (key < v[mid]) high = mid - 1;
    else if (key > v[mid]) low = mid + 1;
    else return mid;
  }
  return n;
}

int main() {
  try {
    vector<int> v{ 7, 2, 3, 11, 5 };
    int target = 11;
    sort(v.begin(), v.end());
    size_t pos = binarySearch(target, v);
    if (pos == v.size()) cout << "������Ȃ�\n";
    else {
      assert(v[pos] == target);
      cout << "v[" << pos << "] = " << v[pos] << endl;
    }
  }
  catch (exception& e) {
    cerr << e.what() << endl;
  }
  cout << endl;//�o�͒l�Fv[4] = 11
}