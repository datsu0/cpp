#include <iostream>
using namespace std;
 
int
main(int argc, char *argv[])
{
        int a,b,sum=0;
        cin >> a;
        cin >> b;
		int i=0;
		while(i<2){
			if(a>b){
				sum = sum + a;
				a--;
			}else{
				sum = sum + b;
				b--;
			}
			i++;
		}
        cout << sum << endl;

        return 0;
}