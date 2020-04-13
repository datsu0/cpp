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
    if(N/100==7){
        cout << "Yes" << endl;
        return 0;
    }else if((N%100)/10==7){
        cout << "Yes" <<endl;
        return 0;
    }else if((N%10)==7){
        cout << "Yes" <<endl;
        return 0;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}