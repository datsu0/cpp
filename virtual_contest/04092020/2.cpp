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

    int A,B;
    cin >> A >> B;
    int ans=1;

    int i=0;
    while(ans<B){
        ans--;
        ans += A;
        i++;
    }
    cout << i << endl;
    return 0;
}