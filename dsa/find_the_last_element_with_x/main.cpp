#include <bits/stdc++.h>

using namespace std;
int binarysearch(int*a,int x,int n)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
            {
                int i=mid;
                while(i<n && a[i]==a[mid])
                {
                    i++;
                }
                return i-1;
            }
        else if(a[mid]>x)
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int *a;
    a= new int[n];
    for(int i=0; i<n; i++)
        {
        cin>> a[i];
    }
    while(1)
    {
        int value;
        cin >> value;
        if(value==-1)
            break;
        else
        cout << binarysearch(a,value,n) << endl;
    }
    return 0;
}
