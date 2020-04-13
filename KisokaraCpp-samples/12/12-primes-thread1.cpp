#include <thread>
#include "number.h"
using namespace std;

const int N = 100;//�O���[�o���ϐ�

//3�̔{��+1�ƂȂ鐔�����𒲂ׂ�
void threadFuncA() {
  for (int n = 4; n <= N; n += 3) {
    if (isPrime(n)) {
      cout << n << ", ";
    }
  }
}

//3�̔{��+2�ƂȂ鐔�����𒲂ׂ�
void threadFuncB() {
  for (int n = 5; n <= N; n += 3) {
    if (isPrime(n)) {
      cout << n << ", ";
    }
  }
}

int main() {
  cout << "2, 3, ";

  thread threadA(threadFuncA);
  thread threadB(threadFuncB);

  //�X���b�h�̏I����҂�
  threadA.join();
  threadB.join();
  cout << endl;
}