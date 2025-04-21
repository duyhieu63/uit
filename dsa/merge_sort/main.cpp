#include <bits/stdc++.h>

using namespace std;
int n;
void merge(int a[100],int left,int middle,int right)
{
    int len_left = middle-left+1;
    int len_right=right-middle;
    int a_left[len_left];
    int a_right[len_right];
    for(int i=0;i<len_left;i++)
    {
        a_left[i]=a[left+i];
    }
    for(int i=0;i<len_right;i++)
    {
        a_right[i]=a[middle+i+1];
    }
    int i1=0;
    int i2=0;
    int k=left;
    while(i1<len_left&&i2<len_right)
    {
        if(a_left[i1]<=a_right[i2])
        {
            a[k]=a_left[i1];
            i1++;
            k++;
        }
        else
        {
            a[k]=a_right[i2];
            i2++;
            k++;
        }
    }
    while(i1<len_left)
    {
        a[k]=a_left[i1];
        i1++;
        k++;
    }
    while(i2<len_right)
    {
        a[k]=a_right[i2];
        i2++;
        k++;
    }
}
void MergeSort(int a[100],int left,int right)
{
    if(left<right)
    {
        int middle=(left+right)/2;
        MergeSort(a,left,middle);
        MergeSort(a,middle+1,right);
        merge(a,left,middle,right);
        for(int i=0;i<n;i++)
        {
            if(i==left)
                        cout <<"[ ";
            if(i==right)
                {
                    cout << a[i]<<" ] ";
                    continue;
                }
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cin >> n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr,0,n-1);
    return 0;
}
