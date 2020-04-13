#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <stack>
#include <queue>
typedef long long ll;
using namespace std;

int main(){
    int N,A,B;
    cin >> N >> A >> B;
    if(N*A<B){
        cout << N*A << endl;
    }else{
        cout << B << endl;
    }
    return 0;
}