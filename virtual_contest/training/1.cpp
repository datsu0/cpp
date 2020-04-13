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
    int ans[100];
    double sum=0;
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    for(int i=0;i<100;i++){
        ans[i] = 0;
    }
    
    for(int i=0;i<100;i++){
        for(int j=0;j<N;j++){
            ans[i]+=(a[j]-(i+1))*(a[j]-(i+1));   
        }
    }
    sort(ans,ans+100);
    cout << ans[0] << endl;
    return 0;
}