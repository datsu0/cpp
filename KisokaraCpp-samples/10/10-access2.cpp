#include <iostream>
#include <string>
using namespace std;

struct Person {
  int age;//struct�̃����o�͎w�肪�Ȃ����public
private:
  string name;
};

int main() {
  Person taro;
  //taro.name = "Taro";//�G���[�iname��private�j
  taro.age = 32;//OK
}