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
    
    int N,M;
    cin >> N >> M;
    int A[M],B[M];
    int AcCount = 0;
    int DeadCount = 0;
    int DeadCard[M];
    
    for(int i=0;i<M;i++){
        cin >> A[i] >> B[i];
        if(A[i]>=N){
            AcCount++;
        }else{
            DeadCard[DeadCount] = A[i];
            DeadCount++;
        }
    }
    if(AcCount>=M-1){
        cout << 0 << endl;
    }else{
        int ans = 0;
        sort(DeadCard,DeadCard+DeadCount);
        int i=0;
        while(i<M-1-AcCount){
            ans = ans + (N - DeadCard[DeadCount-1-i]);
            i++;
        }
        cout << ans << endl;
    }
    

    return 0;
}