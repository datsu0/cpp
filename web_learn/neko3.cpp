#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string s);
    void naku() const;
};

/**************
Neko(string s){
    name = s;
}
一気に変数を作るときに値をいれることもできる。
Neko::Neko(string s) : name(s){}
name(s)が変数nameを作るときにsの値を格納するという意味になる。
************/

//Neko class の neko();関数（コンストラクタ）ということ。
Neko::Neko(string s) : name(s){}

void Neko::naku() const{
    cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
}

int main()
{
    string s;
    cout<<"猫を生成します。名前を入力してください。"<<endl;
    cin>>s;

    Neko dora(s);  //コンストラクタが実行され、文字列sの名前のdoraが生成される
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"猫が鳴きます。"<<endl;

    dora.naku();   //doraに対してnakuを実行
}