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


char in[120];
pair<pair<string,int>,int> p[110];
int main(){
    int a;scanf("%d",&a);
    for(int i=0;i<a;i++){
        int t;
        scanf("%s%d",in,&t);
        p[i]=pair(pair(in,-t),i);
    }
    std::sort(p,p+a);
    for(int i=0;i<a;i++)printf("%d\n",p[i]);
}
