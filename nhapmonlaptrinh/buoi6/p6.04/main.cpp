#include <iostream>
#include<math.h>
#define MAX 100
using namespace std;
bool checksnt(int n)
{
    if(n==1)
        return false;
    else if(n==2)
        return true;
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}
int main()
{
    int a[MAX],n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(checksnt(a[i]))
        {
            cout << a[i] << " ";
            found++;
        }
    }
    if(found==0)
        cout << "0";
    return 0;
}
