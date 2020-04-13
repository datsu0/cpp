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

    int N;
    cin >> N;
    int points[N];
    int dp[10000]={0};
    int DP=10000;

    for(int i=0;i<N;i++){
        cin >> points[i];
    }

    dp[0]=0;
    for(int i=0;i<DP;i++){
        dp[i+1] = max(dp[i],dp[i]+points[i]);
    }

    for(int i=0;i<DP;i++){
        cout << dp[i] << endl;
    }
    
    return 0;
}