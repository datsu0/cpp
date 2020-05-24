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
    
    int K;
    string S;
    cin >> K;
    cin >> S;
    
    for(int i=0;i<K&&i<S.size();i++){
        cout << S[i];
    }
    if(S.size()>K){
        cout << "..." << endl;
    }
    return 0;
}