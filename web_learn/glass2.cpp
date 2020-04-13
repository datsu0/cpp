#include <iostream>
using namespace std;

class Glass
{
    int nakami;                    //水の量
public:
    Glass() : nakami(10){}         //引数を取らないコンストラクタ
    void dasu();                   //水を出す関数（定義は外で書く）
};

void Glass::dasu(){
    if(nakami >=2){
        nakami -= 2;
        cout << "水を出しました。" << endl;
        cout << "現在のコップの中身は" << nakami << "です。" << endl;
    }else{
        cout << "そんなに水がありません。" << endl;
        cout << "現在のコップの中身は" << nakami << "入ってるだけです" <<endl;
    }
}

int main()
{
    Glass glass; //glassという名のコップを生成。
    //引数を取らないコンストラクタが呼び出され、nakamiに10が入れられる。
    cout<<"コップglassをつくりました。"<<endl;
    cout<<"glassから水を3回出します。"<<endl;
    glass.dasu();
    glass.dasu();
    glass.dasu();
    glass.dasu();
    glass.dasu();
    glass.dasu();
    cout<<"終了"<<endl;
}