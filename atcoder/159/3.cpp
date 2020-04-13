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
    double L;
    cin >> L;
    int ans = 0;
    for(double i=1;i<L;i=i+0.01){
        for(double j=1;j<L-i;j=j+0.01){
            double k = L - i - j;
            double S = 2*(i*j+j*k+i*k);
            if(ans<pow(S/6,3/2)){
                ans = pow(S/6,3/2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}