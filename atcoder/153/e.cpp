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
    pair<int,int> A[N];
    for(int i=0;i<N;i++){
        cin >> A[i].first >> A[i].second;
    }
    int cost[N];
    sort(A,A+N,[](pair<int,int>a,pair<int,int>b){
        return (float)a.first/a.second < (float)b.first/b.second;
    })
    int AllMp=0;
    while(H>=0){
        AllMp+=A[0].second;
        H-=A[0].first;
        if(H-A[0].first<0){
            
        }
    }

    return 0;
}