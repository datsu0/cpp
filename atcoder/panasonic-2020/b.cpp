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
    long long int H,W;
    cin >> H >> W;
    if(H==1||W==1){
        cout << 1 << endl;
        return 0;
    }

    if((H*W)%2==0){
        cout << H*W/2 << endl;
    }else{
        cout << H*W/2+1 << endl;
    }
    
    return 0;
}