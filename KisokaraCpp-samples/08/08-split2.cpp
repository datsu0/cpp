#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main() {
  ifstream datafile("test.dat");
  regex rx(R"(\s)");              //•ªŠ„‚Ì‚½‚ß‚Ì³‹K•\Œ»
  string str;                     //s‚ğŠi”[‚·‚é‚½‚ß‚Ì•Ï”
  while (getline(datafile, str)) {//1s‚¸‚Â“Ç‚İ‚Ş
    sregex_token_iterator it(str.begin(), str.end(), rx, -1);
    sregex_token_iterator end;
    string label = *it++;  //Å‰‚Íƒ‰ƒxƒ‹
    int total = 0;         //‡Œv‚ğŒvZ‚·‚é‚½‚ß‚Ì•Ï”
    while (it != end) {
      total += stoi(*it++);//•¶š—ñ‚ğ®”‚É•ÏŠ·‚·‚é
    }
    cout << label << ": " << total << endl;
  }
  datafile.close();
}