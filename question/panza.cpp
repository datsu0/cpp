#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int N,P;
    cin >> N >> P;
    int point[N];
    int attend[N];
    for(int i=0;i<N;i++){
        cin >> point[i] >> attend[i];
        cout <<"point= "<< point[i] <<" "<< attend[i] << endl;
    }
    int c[N];
    int count=0;
    for(int i=0;i<N;i++){
        if((point[i]-(attend[i]*5))>=P){
            c[count]=i;
            count++;
        }
    }
    for(int i=0;i<count;i++){
        cout << c[i] << endl;
    }
    
    return 0;
}