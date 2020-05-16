#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <math.h>
#define rep(i,n) for (int i=0; i < (n); i++)
using namespace std;
using P = pair<int,int>;
typedef long long ll;


template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}


int main() {

    int N,M,X;
    cin >> N >> M >> X;
    int C[N],A[N][M];
    int SUM[N];
    for(int i=0;i<N;i++){
        cin >> C[i];
        SUM[i]=0;
        for(int j=0;j<M;j++){
            cin >> A[i][j];
        }
    }
    int ans = 0;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){

        }
    }
    if(ans==0){
        cout << -1 << endl;
    }else if(ans>0){
        cout << ans << endl;
    }

    return 0;
}