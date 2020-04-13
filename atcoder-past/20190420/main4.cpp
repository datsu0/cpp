#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
        int N;
        cin >> N;
        int K;
        cin >> K;
        char s[N];
        cin >> s;
        
        int i=0;
        while(1){
            if(s[i]==NULL){
                break;
            }
            i++;
        }

        if(i==0){
            cout << 0 << endl;
            return 0;
        }

        int size = i;
        
        

        return 0;
}