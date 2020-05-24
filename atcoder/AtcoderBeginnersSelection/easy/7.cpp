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

    int bingo[3][3];
    int ans[3][3];

    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++){
        
            cin >> bingo[i][j];
            ans[i][j] = 0;
        
        }

    }

    int N;
    cin >> N;
    int b[N];
    
    for(int i=0;i<N;i++){
    
        cin >> b[i];
    
    }
    
    for(int i=0;i<3;i++){
    
        for(int j=0;j<3;j++){
    
            for(int k=0;k<N;k++){
    
                if(b[k]==bingo[i][j]){
    
                    ans[i][j] = 1;
    
                }
    
            }
    
        }
    
    }
    string ANS = "No";
    for(int i=0;i<3;i++){
        if(ans[i][0]&&ans[i][1]&&ans[i][2]) ANS = "Yes";
        if(ans[0][i]&&ans[1][i]&&ans[2][i]) ANS = "Yes";
    }

    if(ans[0][0]&&ans[1][1]&&ans[2][2]) ANS = "Yes";
    if(ans[0][2]&&ans[1][1]&&ans[2][0]) ANS = "Yes";
    
    cout << ANS << endl;

    return 0;
}