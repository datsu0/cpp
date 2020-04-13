#include <thread>
#include <mutex>
#include "number.h"
using namespace std;

const int N = 100;//�O���[�o���ϐ��ɂ���
mutex m;//�r������̂��߂̃I�u�W�F�N�g

void threadFuncA() {
  for (int n = 4; n <= N; n += 3) {
    if (isPrime(n)) {
      unique_lock<mutex> lock(m);//mutex���l������
      cout << n << ", ";
    }//mutex���������
  }
}

void threadFuncB() {
  for (int n = 5; n <= N; n += 3) {
    if (isPrime(n)) {
      unique_lock<mutex> lock(m);//mutex���l������
      cout << n << ", ";
    }//mutex���������
  }
}

int main() {
  cout << "2, 3, ";

  thread threadA(threadFuncA);
  thread threadB(threadFuncB);

  threadA.join();
  threadB.join();
  cout << endl;
}