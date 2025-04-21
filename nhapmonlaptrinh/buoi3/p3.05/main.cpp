#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   double s1,s2,s3=0;
   for(int i=1;i<=n;i++)
   {
       s1+=pow(i,i);
       int i1=1;
       double tichphu=1,tongphu=0;
       for(;i1<=i;i1++)
       {
           tichphu*=i1;
           tongphu+=i1;
       }
       s3+=1/(tongphu);
       s2+=tichphu;
   }
   cout << s1 << endl << s2 << endl << s3;
}
