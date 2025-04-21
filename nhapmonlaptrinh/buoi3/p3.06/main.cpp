#include <bits/stdc++.h>
using namespace std;
long long giaiThua(int n)
{
    long long giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}
int main(){
   double s1,s2,s3;
   s1=s3=1;
   s2=0;
   int x,n;
   cin >> x >> n;
   for(int i=1;i<=n;i++)
   {
       s1+=pow(x,i);
   }
   for(int i=0;i<=2*n;i+=2)
   {
       s2+=pow(x,i);
   }
   for(int i=1;i<=n;i++)
   {
       double tichphu=giaiThua(i);
       s3+=static_cast<double>(pow(x,i))/tichphu;
   }
   cout << s1 << endl << s2 << endl << s3;
}
