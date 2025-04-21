#include <iostream>
#define MAX 100
using namespace std;
int n;
int main()
{
       int a[MAX],x,p,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> p >> k;
     for(int i=p;i+k<=n;i++)
    {
        a[i]=a[i+k];
    }
    n-=k;
     for(int i=0;i<n;i++)
    {
        cout <<a[i] << " ";
    }
    return 0;
}
