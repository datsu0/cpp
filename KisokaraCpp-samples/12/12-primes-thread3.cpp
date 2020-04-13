#include <thread>
#include <mutex>
#include "number.h"
using namespace std;

mutex m;//�r������̂��߂̃I�u�W�F�N�g

void threadFunc(int N, int start) {
  for (int n = start; n <= N; n += 3) {
    if (isPrime(n)) {
      unique_lock<mutex> lock(m);
      cout << n << ", ";
    }
  }
}

int main() {
  const int N = 100;

  cout << "2, 3, ";

  thread threadA(threadFunc, N, 4);//4���璲�ׂ�
  thread threadB(threadFunc, N, 5);//5���璲�ׂ�

  //�X���b�h�̏I����҂�
  threadA.join();
  threadB.join();
  cout << endl;
}