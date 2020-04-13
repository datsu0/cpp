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

    int N;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    int map[7]={0};

    int other = 0;
    for(int i=0;i<N;i++){
        if(a[i]>=3200){
            other++;
        }else{
            map[a[i]/400]++;
        }
    }
    int min=0;
    for(int i=0;i<8;i++){
        if(map[i]!=0){
            min++;
        }
    }
    if(min==0&&other>0){
        cout << 1 << " " << other << endl;
    }else{
        cout << min << " " << min + other <<endl;
    }
    

    return 0;
}