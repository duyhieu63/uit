#include <bits/stdc++.h>
using namespace std;
int times=0;
void QuickSort(int a[],int l,int r)
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
        times++;

        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort(a,l,j);
    if(i<r)
        QuickSort(a,i,r);
}
int main()
{
    int *arr,n;
    cin >> n;
    arr=new int[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    QuickSort(arr,0,n-1);
    cout << "Sorted Array: ";
    for(int i=0; i<n; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
    cout << "Number of times to swap 2 numbers: ";
    cout << times;
    return 0;
}
