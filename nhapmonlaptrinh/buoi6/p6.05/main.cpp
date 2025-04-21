#include <iostream>
#define MAX 100
using namespace std;

int main()
{
       int a[MAX],n,x,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> x >> k;
    for(int i=n;i>k;i--)
    {
        a[i]=a[i-1];
    }
    n++;
    a[k]=x;
      for(int i=0;i<n;i++)
    {
        cout << a[i]<< " ";
    }
    return 0;
}
