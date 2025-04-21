#include <iostream>

using namespace std;
void QuickSort(int a[],int l,int r)
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
        QuickSort(a,l,j);
    if(i<r)
        QuickSort(a,i,r);
}
int main()
{
    int n;
    cin >> n;
    int *odd_arr=new int[n/2];
    int *even_arr= new int[n/2];
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        int value;
        cin >> value;
        if(value%2==0)
        {
            odd_arr[odd++]=value;
        }
        else
        {
            even_arr[even++]=value;
        }
    }
    QuickSort(odd_arr,0,odd-1);
    QuickSort(even_arr,0,even-1);
    for(int i=0;i<odd;i++)
    {
        cout << odd_arr[i] << endl;
    }
    for(int i=0;i<even;i++)
    {
        cout << even_arr[i] << endl;
    }
    return 0;
}
