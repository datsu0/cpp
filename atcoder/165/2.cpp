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

    ll X;
    cin >> X;
    ll money = 100;
    for(int i=0;;i++){
        if(X<=money){
            cout << i << endl;
            return 0;
        }
        money = money * 1.01;
    }
    return 0;
}