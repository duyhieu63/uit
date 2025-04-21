#include <bits/stdc++.h>

using namespace std;
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
            for(int i=0;i<n;i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        a[j + 1] = key;
        for(int i=0;i<n;i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr;
    arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr,n);
    return 0;
}
