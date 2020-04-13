#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string name;
    
    cout << "こんにちは。私はコンピュータです。" <<endl;
    cout << "あなたの名前を入力してください。" <<endl;
    cin >> name;
    cout<<name<<"さん。よろしく。"<<endl;

    string str1("12");
    string str2("xyz");
    string str3 = str1 + str2;   // + 演算子により str1 と str2 を連結
    cout << str3 << "\n";   

}