#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <list>
#include <string>
#include <math.h>
using namespace std;
typedef long long ll;

int main() {

    int N,M;
    cin >> N >> M;
    int a[M],b[M];
    vector<int> get1,getN;
    for(int i=0;i<M;i++){
        cin >> a[i] >> b[i];
        if(a[i]==1){
            get1.push_back(i);
        }else if(b[i]==N){
            getN.push_back(i);
        }
    }

    if(get1.size()==0||getN.size()==0){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    for(int i=0;i<get1.size();i++){
        for(int j=0;j<getN.size();j++){
            if(b[get1[i]]==a[getN[j]]){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}