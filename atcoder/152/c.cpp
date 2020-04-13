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

    int i=0;
    int N;
    cin >> N;
    int P[N];
    for(int i=0;i<N;i++){
        cin >> P[i];
    }
    int ans=0;
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(P[i]>P[j]){
                ans--;
                break;
            }
        }
        ans++;
    }
    */
   // should count max update Number
   //自分が一番小さかったらOK
   int min=P[0];
   ans++;
   for(int i=1;i<N;i++){
       if(min>P[i]){
           min=P[i];
           ans++;
       }
       
   }
    cout<<ans<<endl;

    return 0;
}