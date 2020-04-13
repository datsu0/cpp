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

    int X;
    cin >> X;
    int num = X % 100;
    int digit = X / 100;
    int count = 0;
    while(digit>count){
        if(num>5){
            num = num -5;
        }else{
            cout << 1;
            return 0;
        }
        count++;
    }
    cout << 0;
    return 0;
}