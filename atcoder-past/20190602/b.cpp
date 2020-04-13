#include<iostream>
#include<string>
using namespace std;


int main(){
    string s;
    cin >> s;
    int i=0;
    int flag=0;
    while(flag==0){
        if(s.find("ABC")>=0&&s.find("ABC")<=s.size()){
            int p = s.find("ABC");
            s.replace(p,p+3,"BCA");
            i++;
        }else{
            cout << i << endl;
            flag = 1;
            break;
        }
    }
    return 0;
}