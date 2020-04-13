#include <iostream>
#include <vector>
using namespace std;

struct Shape {
  virtual void draw() = 0;//�������z�֐�
  virtual ~Shape();//�h���̉\��������Ȃ�virtual�ɂ��Ă����i�K�{�ł͂Ȃ��j
};

Shape::~Shape() {}

struct Circle : public Shape {
  void draw();
};

void Circle::draw() { cout << "��" << endl; }

struct Rectangle : public Shape {
  void draw();
};

void Rectangle::draw() { cout << "��" << endl; }

int main() {
  //Shape s;//�G���[�i���ۃN���X�̃I�u�W�F�N�g����邱�Ƃ͂ł��Ȃ��j
  Circle c;
  c.draw();//�o�͒l�F��
  Rectangle r;
  r.draw();//�o�͒l�F��

  vector<Shape*> shapes = { &c, &r };
  for (auto s : shapes) {
    s->draw();
  }
  //�o�͒l�F��
  //�o�͒l�F��
}