#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,n,tong;
   cin >> a >> b >> n;
   for(int i=0;i<n;i++)
   {
       tong+=a*b;
       ++a;
       ++b;
   }
   cout << tong;
}
