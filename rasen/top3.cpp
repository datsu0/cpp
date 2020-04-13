#include<iostream>
using namespace std;

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    int num=10;
    int max[3]={0};
    int sava;
    for(int i=0;i<3;i++){
        for(int j=0;j<num;j++){
            if(max[i]<a[j]){
                max[i]=a[j];
                sava = j;
            }
        }
        for(int j=sava;j<num;j++){
            a[j]=a[j+1];
        }
        num--;
    }
    for(int i=0;i<3;i++){
        cout << max[i] << endl;
    }
    return 0;
}