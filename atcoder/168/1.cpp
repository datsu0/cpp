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
    if(N%10==3){
        cout << "bon" << endl;
    }else if(N%10==0||N%10==1||N%10==6||N%10==8){
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }
    return 0;
}