#include <iostream>
using namespace std;

int main() {
  //�X�R�[�v�t���񋓌^
  enum class choice1 { ROCK, SCISSORS, PAPER };
  //enum struct choice1 { ROCK, SCISSORS, PAPER };//OK

  choice1 x = choice1::ROCK;//�񋓌^�̎g�p
  cout << (x == choice1::ROCK ? "�O�[" : "�O�[�ȊO") << endl;//�o�͒l�F�O�[

  //int ROCK = 1;//OK�i���O�̏d���͂Ȃ��j

  //�X�R�[�v�����񋓌^
  enum choice2 { rock, scissors, paper };
  choice2 y = rock;
  cout << y << endl;//�o�͒l�F0�irock�̂��Ɓj

  //int rock = 1;//�G���[�i���O���d�����Ă���j
}