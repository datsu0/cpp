#include <cstdio>
using namespace std;

int main() {
  int x = 10;
  double y = 3.1415926535;
  printf("Hello, World!\n");      //�o�͒l�FHello, World!
  printf("The value is %d.\n", x);//�o�͒l�FThe value is 10.�i�����j
  printf("%d %f\n", x, y);        //�o�͒l�F10 3.141593�i�����̈����j
  printf("<%5d>\n", x);           //�o�͒l�F<   10>�i������5�j
  printf("%.7f\n", y);            //�o�͒l�F3.1415927�i�����_�ȉ���7���܂Łj
  printf("The address of x is %p.\n", static_cast<void*>(&x));
  //�o�͗�FThe address of x is 00DEFB28.
}