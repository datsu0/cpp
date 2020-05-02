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

    string S,T;
    cin >> S;
    cin >> T;
    int a[26];
    int b[26];
    for(int i=0;i<26;i++){
        a[i]=0;
        b[i]=0;
    }
    for(int i=0;i<S.size();i++){
        a[S[i]-97]++;
        b[T[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}