#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ {"one", 1}, {"two", 2}, {"three", 3 } };
  
  try {
    string target = "four";
    cout << dictionary.at(target) << endl;//��O����
  }
  catch (exception& e) {
    cerr << e.what() << endl;//�o�͗�Finvalid unordered_map<K, T> key
  }
  cout << "����I��\n";//�o�͒l�F����I��
}