#include <bits/stdc++.h>

using namespace std;
vector<int> v[15];
int n,m;
int sh[15];
int check[15];
int bigcont;
int f ;

bool checkf(){
   for (int i = 1 ; i <= m ; i++){
           int cont = 0;
           for (int j = 0 ; j < v[i].size(); j++){
               if (check[v[i][j]-1])cont++;
           }
           if (cont%2 != sh[i])return 0;
   }
   return 1;

}





int main()
{
   cin>>n>>m;

   for (int i = 1 ; i <= m ; i++){
       int k;
       cin>>k;
       for (int j = 0 ; j < k ; j++){
           int z;
           cin>>z;
           v[i].push_back(z);
       }
   }
   for (int i = 1 ; i <= m ; i++)cin>>sh[i];

   for (int i = 0 ; i < pow(2,n) ; i++){
       for (int j = 0 ; j < n ; j++){
           if (i & (1<<j))check[j] = 1;
           else check[j] = 0;
       }
   bigcont+=checkf();
   }

   cout<<bigcont<<endl;

   return 0;
}