#include<iostream>
#include <iomanip>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
    int a,b;
    while(1){
        cin >>a >>b;
        if(a==0&&b==0){
            cout << endl;
            break;
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}