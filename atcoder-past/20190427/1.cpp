#include <iostream>
using namespace std;
 
int
main(int argc, char *argv[])
{
        int a,b;
        float t;
        cin >> a;
        cin >> b;
        cin >> t;
        int sum=0;
        for(int i=1;i<t+0.5;i++){
            if(i%a==0){
                sum = sum + b;
            }
        }
        cout << sum << endl;
        return 0;
}