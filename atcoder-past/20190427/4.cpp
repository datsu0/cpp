#include <iostream>
using namespace std;
 
int
main(int argc, char *argv[])
{
        int N;
        cin >> N;
        int a[N];
        for(int i=0;i<N;i++){
            cin >> a[i];
        }  
        int Mcount=0;
        if(a[0]<0){
            a[0]*=-1;
            Mcount++;
        }
        int small=a[0];
        int smallpoint;
        int zeroflag=0;
        for(int i=0;i<N;i++){
            if(a[i]==0){
                zeroflag=1;
            }
            if(a[i]<0){
                Mcount++;
                a[i]*=-1;
            }
            if(a[i]<small){
                small=a[i];
                smallpoint=i;
            }
        }
        double sum=0;
        for(int i=0;i<N;i++){
            if(Mcount%2==0||zeroflag==1){
                sum = sum + a[i];
            }else{ 
                if(i!=smallpoint){
                    sum = sum + a[i];
                }else if(i==smallpoint){
                    sum = sum - a[i];
                }
            }
        }

        cout << sum << endl;

        return 0;
}