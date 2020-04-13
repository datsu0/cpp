#include <iostream>
#include <string>
using namespace std;

class Greeting {
  string phrase;
public:
  Greeting(string newPhrase) : phrase(newPhrase) {}

  void operator()(const string& name) {
    cout << phrase << "�A" << name << endl;
  }
};

int main() {
  Greeting hello("�R���j�`�n");
  Greeting goodbye("�T���E�i��");

  hello("�^���E"); //�o�͒l�F�R���j�`�n�A�^���E
  goodbye("�n�i�R"); //�o�͒l�F�T���E�i���A�n�i�R
}