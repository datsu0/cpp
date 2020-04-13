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

    int i=0;
    int N,M;
    cin >> N >> M;
    int ans = 0;
    ans = (N * (N-1))/2;
    ans = ans + (M * (M-1))/2;

    cout << ans << endl;
    return 0;
}