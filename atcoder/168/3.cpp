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

    int A,B,H,M;
    cin >> A >> B >> H >> M;
    double deg = abs(H/12-M/60)*360;
    double ans = A*A + B*B - 2*A*B*cos(M_PI*deg/180);
    cout << ans << endl;
    return 0;
}