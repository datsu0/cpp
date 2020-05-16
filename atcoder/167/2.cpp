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

    ll A,B,C,K;
    cin >> A >> B >> C >> K;
    if(K<A){
        cout << K << endl;
    }else if(A <= K && K <= A+B){
        cout << A << endl;
    }else if(A+B <= K && K < A+B+C){
        cout << A - 1 *(K-(A+B)) << endl;
    }else{
        cout << A - C << endl;
    }

    return 0;
}