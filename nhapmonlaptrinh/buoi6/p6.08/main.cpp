#include <iostream>
#define MAX 100
using namespace std;
int n;
void xoa(int a[],int vt)
{
    for(int i=vt;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
int main()
{
       int a[MAX],x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
          xoa(a,i);
          i--;
        }
    }
     for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
