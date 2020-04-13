#include <iostream>
using namespace std;
 
int
main(int argc, char *argv[])
{
        int N;
        cin >> N;
        int v[N],c[N];
        for(int i=0;i<N;i++){
            cin >> v[i];
        }       
        for(int i=0;i<N;i++){
            cin >> c[i];
        }
        int sum=0;
        for(int i=0;i<N;i++){
            if(v[i]>c[i]){
                sum = sum + v[i] - c[i];
            }
        }

        cout << sum << endl;

        return 0;
}