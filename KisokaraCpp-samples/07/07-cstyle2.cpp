#include <iostream>
using namespace std;

void report(const char* cstr) {          //�T�C�Y�͕s�v
  for (int i = 0; cstr[i] != '\0'; ++i) {//������̏I��肪�킩��
    cout << '[' << i << "]: " << cstr[i] << endl;
  }
}

int main() {
  char cstr[] = "hello";
  report(cstr);
}