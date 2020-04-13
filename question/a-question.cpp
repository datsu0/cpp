#include <iostream>
using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int H,W,N;
    cin >> H >> W >> N;
    int h[N],w[N],x[N];
    for(int i=0;i<N;i++){
        cin>>h[i]>>w[i]>>x[i];
    }
    char ans[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            ans[i][j]='.';
        }
    }

    for(int i=0;i<N;i++){
        int totalHigh=H-1;
        int flag=0;
        for(int check=H-1;check>0;check--){
            for(int k=x[i];k<w[i]+x[i];k++){
                if(ans[check][k]=='#'){
                    flag=1;
                    totalHigh=check-1;
                }
            }
        }

        for(int high=0;high<h[i];high++){
            for(int j=x[i];j<w[i]+x[i];j++){
                ans[totalHigh][j]='#';
            }
            totalHigh--;
        }
    }
    
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    
    return 0;
}