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
    ll sum = 0;
    for(int i=1;i<=N;i++){
        if(i%3!=0&&i%5!=0){
            sum += i;
        }
    }
    cout << sum << endl;
    
    return 0;
}