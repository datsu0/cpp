#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <stack>
#include <queue>
typedef long long ll;
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    char s[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >> s[i][j];
        }
    }
    int hrz[H];
    int vtc[W];
    for(int i=0;i<H;i++){
        hrz[i]=0;
    }
    for(int i=0;i<W;i++){
        vtc[i]=0;
    }

    for(int i=0;i<H;i++){
        int tmp=0;
        for(int j=0;j<W;j++){
            if(s[i][j]=='.'){
                hrz[i]++;
            }else{
                if(hrz[i]>tmp){
                    tmp = hrz[i];
                    hrz[i]=0;
                }
            }
        }
        if(hrz[i]<tmp){
            hrz[i]=tmp;
        }
    }
    
    for(int i=0;i<H;i++){
        int tmp=0;
        for(int j=0;j<W;j++){
            if(s[j][i]=='.'){
                vtc[i]++;
            }else{
                if(vtc[i]>tmp){
                    tmp = vtc[i];
                    vtc[i]=0;
                }
            }
        }
        if(vtc[i]<tmp){
            vtc[i]=tmp;
        }
    }
    int ans[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            ans[i][j]=hrz[i]+vtc[j]-1;
        }
    }
    int maxarea=ans[0][0];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(maxarea<ans[i][j]){  
                maxarea=ans[i][j];
            }
        }
    }
    cout << maxarea << endl;
    return 0;
}