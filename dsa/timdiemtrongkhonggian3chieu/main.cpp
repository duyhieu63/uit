#include <bits/stdc++.h>

using namespace std;
struct toado
{
    float x,y,z;
};
int ans=0;
int cmp(toado a,toado b)
{
    if(a.x==b.x)
    {
        if(a.y==b.y)
        {
            if(a.z==b.z)
            {
                return 0;
            }
            else if(a.z>b.z)
                return 1;
            else
                return -1;
        }
        else if(a.y>b.y)
        {
            return 1;
        }
        else
            return -1;
    }
    else if(a.x>b.x)
    {
        return 1;
    }
    else
        return -1;
}
int binary_search(toado *a,int n,toado find)
{
    int l=0;
    int r=n-1;
    int steps=0;
    while(l<=r)
    {
        steps++;
        int mid = l+(r-l)/2;
        if(cmp(a[mid],find)==0)
        {
            return steps;
        }
        else if(cmp(a[mid],find)==1)
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
    toado*arr;
    arr=new toado[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i].x >> arr[i].y >> arr[i].z;
    }    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        toado value;
        cin >> value.x >> value.y >> value.z;
        int steps=binary_search(arr,n,value);
        if (steps == -1) cout << "KHONG\n";
        else cout << steps << '\n';
    }
    return 0;
}
