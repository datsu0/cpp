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
    int a,b,c;
    cin >> a >> b >> c;
    int ans[3];
    ans[0]=a+b;
    ans[1]=b+c;
    ans[2]=c+a;
    int min=10000000;
    for(int i=0;i<3;i++){
        if(ans[i]<min){
            min=ans[i];
        }
    }
    cout << min << endl;
    return 0;
}