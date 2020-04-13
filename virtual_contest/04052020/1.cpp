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

    int A,B,C,D,E;
    cin >> A >> B >> C >> D >> E;
    int ans=0;
    if(A<0&&B<0){
        ans = (B - A) * C;
    }else if(A>0&&B>0){
        ans = (B - A) * E;
    }else{
        ans = -1 * A * C + D + B * E;
    }

    cout << ans << endl;

    return 0;
}