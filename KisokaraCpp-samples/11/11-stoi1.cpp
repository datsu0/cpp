#include <iostream>
#include <string>
using namespace std;

int main() {
  int a;
  try {
    a = stoi("abc");
    cout << a << endl;
  }
  catch (invalid_argument& e) {
  //catch (exception& e) {//OK
    cerr << e.what() << endl;//�o�͗�Finvalid stoi argument
  }
  cout << "����I��\n";//�o�͒l�F����I��
}