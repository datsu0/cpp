#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5 };
  try {
    cout << v.at(3) << endl;
  }
  catch (out_of_range& e) {
  //catch (exception& e) {//OK
    cerr << e.what() << endl;//�o�͗�Finvalid vector<T> subscript
  }
  cout << "����I��\n";      //�o�͒l�F����I��
}