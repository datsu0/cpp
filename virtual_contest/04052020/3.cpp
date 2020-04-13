#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <math.h>
using namespace std;
typedef long long ll;


int main() {

    int N,M,D;
    cin >> N >> M >> D;
    char AreaMap[N][M];
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> AreaMap[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int counterV=0;
            int counterH=0;
            for(int k=j;k<j+D;k++){
                if(j+D>M){
                    break;
                }
                if(AreaMap[i][k]=='.'){
                    counterV++;
                }
            }
            for(int l=i;l<i+D;l++){
                if(i+D>N){
                    break;
                }
                if(AreaMap[l][j]=='.'){
                    counterH++;
                }
            }
            if(D==counterV){
                ans++;
            }
            if(D==counterH){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}