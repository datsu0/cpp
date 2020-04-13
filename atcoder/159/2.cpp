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

    int i=0;
    string S;
    cin >> S;
    int flag = 1;
    int N = S.size();
    for(int i=0;i<N/2;i++){
        if(S[i]!=S[N-1-i]){
            flag = 0;
        }
    }
    for(int i=0;i<(N-1)/2;i++){
        if(S[i]!=S[(N-1)/2-1-i]){
            flag = 0;
        }
    }
    for(int i=0;i<N-((N+3)/2);i++){
        if(S[((N+3)/2)+i-1] != S[N-1-i]){
            flag = 0;
        }
    }
    if(flag==1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}