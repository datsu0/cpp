#include <iostream>
using namespace std;

//�N���X�e���v���[�g�̒�`
template <typename T>
struct Point {
  T x, y;
  Point(T newX, T newY) : x(newX), y(newY) {}
  T squareSum() { return x * x + y * y; }//2��a��Ԃ��֐�
};

int main() {
  Point<int> a(3, 4);
  cout << a.squareSum() << endl;//�o�͒l�F25

  Point<double> b(3.0, 4.0);
  cout << b.squareSum() << endl;//�o�͒l�F25
}