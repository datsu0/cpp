#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
        char s[100000];
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
        int counter1=0;
        

        for(int z=0;z<size;z++){
            if(z%2==0){
                if(s[z]=='1'){
                    counter1++;
                }
            }else{
                if(s[z]=='0'){
                    counter1++;
                }
            }
        }


        int counter2=0;
        for(int z=0;z<size;z++){
            if(z%2==0){
                if(s[z]=='0'){
                    counter2++;
                }
            }else{
                if(s[z]=='1'){
                    counter2++;
                }
            }
        }

        if(counter1<counter2){
            cout << counter1 << endl;
        }else{
            cout << counter2 << endl;
        }

        return 0;
}