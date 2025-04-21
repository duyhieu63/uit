#include <bits/stdc++.h>
using namespace std;
void selectionSort(int *a,int n)
{
    int i,j,min_idx;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        bool ans=false;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
                ans=true;
            }
        }
        swap(a[i],a[min_idx]);
        if(ans==true)
        {
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        }
    }
}
int main()
{
    int *a,n;
    cin>>n;
    a= new int[n];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }
    selectionSort(a,n);
    return 0;
}
