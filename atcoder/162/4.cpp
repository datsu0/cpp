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
    char S[N];
    
    for(int i=0;i<N;i++){
        cin >> S[i];
    }
    char RGB[3]={A,A,A};
    for(int i=1;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if("R"==S[i]||"G"==S[i]||"B"==S[i]){
                    RGB[0]=S[i];
                    break;
                }
            }
            if(RGB[0]!="A"){
                if(){

                }
            }
        }
    }
    return 0;
}