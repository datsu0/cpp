#include <iostream>
#include <string>
using namespace std;

struct Person {
private:
  string name;
public:
  int age;
};

int main() {
  Person taro;
  //taro.name = "Taro";//�G���[�iname��private�j
  taro.age = 32;//OK
}