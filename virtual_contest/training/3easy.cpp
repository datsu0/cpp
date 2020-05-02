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

    int N,A,B;
    cin >> N >> A >> B;
    char S[N];
    for(int i=0;i<N;i++){
        cin >> S[i];
    }
    string ans[N];
    int count=0;
    int countB=0;
    for(int i=0;i<N;i++){
        if(S[i]=='c'){
            ans[i]="No";
        }else if(S[i]=='a'){
            if(count<A+B){
                count++;
                ans[i]="Yes";
            }else{
                ans[i]="No";
            }
        }else if(S[i]=='b'){
            countB++;
            if(count<A+B){
                if(countB<=B){
                    count++;
                    ans[i]="Yes";
                }else{
                    ans[i]="No";   
                }
            }else{
                ans[i]="No";
            }
        }else{
            ans[i]="No";
        }
    }

    for(int i=0;i<N;i++){
        cout << ans[i] << endl;
    }


    return 0;
}