#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;//class�̃����o�͎w�肪�Ȃ����private
public:
  int age;
};

int main() {
  Person taro;
  //taro.name = "Taro";//�G���[�iname��private�j
  taro.age = 32;//OK
}