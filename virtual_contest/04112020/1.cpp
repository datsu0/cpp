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
    int a[N];
    int map[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
        map[i] = 0;
    }
    
    for(int i=0;i<N;i++){
        map[a[i]]++;
    }
    int s[N-2];
    for(int i=0;i<N-2;i++){
        
    }

    return 0;
}