
#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<long long>a,int n,long long x)
{
    int l=0;
    int r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(a[mid]<x)
        {
            l=mid+1;
            ans=mid;
        }
        else
            r=mid-1;
    }
    return ans;
}
void QuickSort(vector<long long>&a,int l,int r)
{
    long long x=a[(l+r)/2];
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
     long long n,x;
    cin >> n >> x;
    vector<long long> nums(n);
    for(auto&v:nums)
        cin >> v;
        QuickSort(nums,0,n-1);
        long long ans=0;
        int i=binary_search(nums,n,x);
        for(;i>=0;i--)
        {
            int j=i-1;
            if(nums[i]+nums[j]<ans)
                break;
        for(;j>=0;j--)
        {
            if(nums[i]+nums[j]<=x)
            {
                ans=max(ans,nums[i]+nums[j]);
                break;
            }
        }
        }
        cout << ans;
    return 0;
}
