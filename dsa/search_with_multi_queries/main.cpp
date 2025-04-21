#include <iostream>
using namespace std;
void Quick_Sort(int a[], int l, int r) {
    int x = a[(l + r) / 2];
    int i = l, j = r;
    while (i <= j) {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j) Quick_Sort(a, l, j);
    if (i < r) Quick_Sort(a, i, r);
}
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
    int n,q;
    cin >> n >> q;
    int *nums=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Quick_Sort(nums,0,n-1);
    while(q--)
    {
        int x;
        cin >> x;
        if(binarysearch(nums,x,n)==-1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
