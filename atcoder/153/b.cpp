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

    int H,N;
    cin >> H >> N;
    int A[N];

    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    int ans=0;
    for(int i=0;i<N;i++){
        ans = ans + A[i];
    }
    //cout << ans << endl;
    if(ans>=H){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}