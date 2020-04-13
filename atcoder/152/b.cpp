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

    int i=0;
    int N,M;
    cin >> N >> M;
    if(N>M){
        for(int i=0;i<N;i++){
            cout<<M;
        }
    }else{
        for(int i=0;i<M;i++){
            cout<<N;
        }
    }

    return 0;
}