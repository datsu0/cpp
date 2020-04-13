#include <iostream>
using namespace std;

struct Circle {
  void draw() { cout << "��" << endl; }
};

struct Rectangle {
  void draw() { cout << "��" << endl; }
};

template <typename T>
void makeDraw(T t) {
  t.draw();
}

int main() {
  Circle c;
  makeDraw(c); //�o�͒l�F��
  Rectangle r;
  makeDraw(r); //�o�͒l�F��
}