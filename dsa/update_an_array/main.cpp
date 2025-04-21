#include <bits/stdc++.h>

using namespace std;
void QuickSort1(int*a,int l,int r)
{
    int x=a[(l+r)/2];
    int i=l;
    int j=r;
    while(j>=i)
    {
        while(a[i]<x)
            i++;
        while(a[j]>x)
            j--;
        if(i<=j)
        {
                swap(a[i],a[j]);

        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort1(a,l,j);
    if(i<r)
        QuickSort1(a,i,r);
}
void QuickSort2(int*a,int l,int r)
{
    int x=a[(l+r)/2];
    int i=l;
    int j=r;
    while(j>=i)
    {
        while(a[i]>x)
            i++;
        while(a[j]<x)
            j--;
        if(i<=j)
        {
                swap(a[i],a[j]);

        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort2(a,l,j);
    if(i<r)
        QuickSort2(a,i,r);
}
int main()
{
    int *nums= new int[100000];
    int n=0;
    while(1)
    {
        int value;
        cin >> value;
        if(value>0)
        {
            if(n<100000)
            nums[n++]=value;
        }
        else if(value==-1)
        {
           QuickSort1(nums,0,n-1);
           int temp=n-1;
           for(int i=n-1;i>=0;i--)
           {
               if(nums[i]==nums[temp])
                            n--;
           }
        }
        else if(value==-2)
        {
            cout << n << endl;
            QuickSort2(nums,0,n-1);
            for(int i=0;i<n;i++)
            {
                cout << nums[i] << endl;
            }
            break;
        }
    }
    return 0;
}
