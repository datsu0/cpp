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
    int N;
    cin >> N;
    int w[N];
    for(int i=0;i<N;i++){
        cin >> w[i];
    }
    int ABS[N];
    for(int i=0;i<N;i++){
        int s1=0;
        int s2=0;
        for(int j=0;j<i;j++){
            s1 = s1 + w[j];
        }
        for(int k=i;k<N;k++){
            s2 = s2 + w[k];
        }
        ABS[i] = abs(s1-s2);
    }
    int min=ABS[0];
    for(int i=0;i<N;i++){
        if(ABS[i]<min){
            min = ABS[i];
        }
    }
    cout << min << endl;
    return 0;
}