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
    ll L,R;
    cin >> L >> R;
    cout << (L%2019)*(R%2019) <<endl;
    return 0;
}