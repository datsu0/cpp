#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ {"one", 1}, {"two", 2}, {"three", 3 } };
  
  string target = "four";
  cout << dictionary.at(target) << endl;//—áŠO”­¶
  cout << "³íI—¹\n";//o—Í‚³‚ê‚È‚¢
}