#include<iostream>
#include<string>
using namespace std;

int func(char s[],int n,int a,int b,int c,int d){
    int moveFlag=0;
    int cmpFlag=0;
    s[a]='#';
    s[b]='#';
    for(int i=b;i<n;){
        if(s[i+1]!='#'){
            moveFlag=1;
            s[i]='.';
            s[i+1]='#';
            i++;
        }else if(s[i+2]!='#'){
            moveFlag=1;
            s[i]='.';
            s[i+2]='#';
            i=i+2;
        }
        if(moveFlag==0){
            //cout << "No" << endl;
            return 0;
        }
        moveFlag=0;
        if(i==d){
            cmpFlag=1;
        }
    }
    if(cmpFlag==1){
        for(int j=a;j<n;){
            if(s[j+1]!='#'){
                s[j]='.';
                s[j+1]='#';
                moveFlag=1;
                j++;
            }else if(s[j+2]!='#'){
                s[j]='.';
                s[j+2]='#';
                moveFlag=1;
                j=j+2;
            }
            if(moveFlag==0){
                //cout << "No" << endl;
                return 0;
            }
            moveFlag=0;
            if(j==c){
                //cout << "Yes" << endl;
                return 1;
            }        
        }
    }
    return 0;
    //cout << "No" << endl;
}


int main(){
    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;
    char s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }

    if(a>b){
        cout << "No" << endl;
        return 0;
    }

    if(a>c){
        cout << "No" << endl;
        return 0;
    }

    if(b>d){
        cout << "No" << endl;
        return 0;
    }

    if(func(s,n,a,b,c,d)==1){
        cout << "Yes" << endl;
        return 0;
    }

    int tmp;
    if(c>d){
        tmp = a;
        a = b;
        b = tmp;
        tmp = c;
        c = d;
        d = tmp;
    }
    
    if(func(s,n,a,b,c,d)==1){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}