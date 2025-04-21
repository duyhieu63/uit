#include <bits/stdc++.h>

using namespace std;
void interchange(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
                swap(arr[i],arr[j]);
        }
    }
}
void heapify(int arr[], int n, int i)
{
int largest = i;
int left = 2 * i + 1;
int right = 2 * i + 2;
if (left < n && arr[left] > arr[largest]) {
largest = left;
}
if (right < n && arr[right] > arr[largest]) {
largest = right;
}
if (largest != i) {
swap(arr[i], arr[largest]);
heapify(arr, n, largest);
}
}
void heapSort(int arr[], int n) {
for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(arr, n, i);
}
for (int i = n - 1; i >= 0; i--) {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
}
}
void countingsort(int *a,int n)
{
    int max_element=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_element=max(max_element,a[i]);
    }
          int count[max_element+1] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        count[a[i]]++;
    }

    for(int i = 0, j= 0 ; i <= max_element && j < n ; j++)
    {
        while(count[j] > 0)
        {
            count[j]--;
            a[i++] = j;
        }
    }
}
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
    }
}
void bubblesort(int *a,int n)
{
//    int j=n-1;
//    while(j>0)
//    {
//        int i=0;
//        while(i<j)
//        {
//            if(a[i]>a[i+1])
//                swap(a[i],a[i+1]);
//            i++;
//        }
//        j--;
//    }
    for(int i=0;i<n-1;i++)
    {
        bool doicho=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    doicho=true;
                }
        }
        if(doicho==false)
                {
                    return;
                }
    }
}
void insertionsort(int *a,int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
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

        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort(a,l,j);
    if(i<r)
        QuickSort(a,i,r);
}
void selectionsort(int *a,int n)
{
    int i,j,min_idx;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }
        }
        swap(a[i],a[min_idx]);
    }
}
int binary_search(int *a,int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
}
int main()
{
    int n;
    cin >> n;
    int *a;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    bubblesort(a,n);
     for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
