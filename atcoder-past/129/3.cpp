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

int counter(int a[],int N){
    if(N<0){
        return 0;
    }
    if(N==0){
        return 1;
    }
    for(int i=0;i<N;i++){
        if(a[i]==N){
            return 0;
        }
    }
    return (counter(a,N-1)+counter(a,N-2))%1000000007;
}

int main(){
    int N,M;
    cin >> N >> M;
    int a[M];
    for(int i=0;i<M;i++){
        cin >> a[i];
    }
    cout << counter(a,N) << endl;
    return 0;
}