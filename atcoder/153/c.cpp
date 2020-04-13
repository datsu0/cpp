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


int main() {

    int N,K;
    cin >> N >> K;
    long long int H[N];

    for(int i=0;i<N;i++){
        cin >> H[i];
    }
    long long int ans = 0;
    if(N<=K){
        cout << 0 << endl;
    }else{
        //vector ver
        //sort(H.begin(),H.end());
        sort(H,H+N);
        for(int i=N-K-1;i>=0;i--){
            ans += H[i];
        }
        cout << ans << endl;
    }
    
    return 0;
}