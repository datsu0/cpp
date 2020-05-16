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

    int N;
    cin >> N;
    for(int i=1;i<=50000;i++){
        if(floor(i*1.08)==N){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}
