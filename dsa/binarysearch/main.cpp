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
            return mid;
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
    int m;
    cin >> m;
    while(m--)
    {
        int value;
        cin >> value;
        cout << binarysearch(a,value,n) << endl;
    }
    return 0;
}
