#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
};

int main() {
  Person taro { "Taro", 32 };

  Person A;
  A = taro;//�R�s�[���

  taro.name = "Jiro";
  cout << A.name << " (" << A.age << ")\n";//�o�͒l�FTaro (32)
}