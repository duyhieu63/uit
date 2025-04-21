#include <bits/stdc++.h>

using namespace std;
//void QuickSort(vector<int> &a,int l,int r)
//{
//    int x=a[(l+r)/2];
//    int i=l;
//    int j=r;
//    while(j>=i)
//    {
//        while(a[i]>x)
//            i++;
//        while(a[j]<x)
//            j--;
//        if(i<=j)
//        {
//                swap(a[i],a[j]);
//
//        i++;
//        j--;
//        }
//    }
//    if(l<j)
//        QuickSort(a,l,j);
//    if(i<r)
//        QuickSort(a,i,r);
//}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for(auto &v:nums)
            cin >> v;
            sort(nums.begin(),nums.end());
        long long ans=0;
        if(n<=3)
        {
        for(int i=0;i<1;i++)
        {
            ans+=(nums[n-1-i]-nums[i]);
        }
        }
        else
        {
            for(int i=0;i<2;i++)
        {
            ans+=(nums[n-1-i]-nums[i]);
        }
        }
        cout << ans << endl;
    }
    return 0;
}
