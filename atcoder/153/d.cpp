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

    //10^18 around((2^63)-1) 64bit整数値
    long long int H;
    cin >> H;
    int i=0;
    while(H>0){
        i++;
        H/=2;
    }

    long long int ans=0;
    for(int j=0;j<i;j++){
        ans = ans + pow(2,j);
    }
    cout << ans << endl;
    return 0;
}