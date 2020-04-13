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
    int H,A;
    cin >> H >> A;
    while(H>0){
        H=H-A;
        i++;
    }
    cout << i << endl;
    return 0;
}