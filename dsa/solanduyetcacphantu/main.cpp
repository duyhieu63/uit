#include <bits/stdc++.h>

using namespace std;
int times=0;
int binarysearch(vector<int>a,int x)
{
    int l=0;
    int r=a.size()-1;
    while(l<=r)
    {
        times++;
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
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &v:nums)
        cin >> v;
        int x;
        cin >> x;
        int vt=binarysearch(nums,x);
    if(vt==-1)
    {
        cout << -1;
    }
    else
    {
        cout << vt << endl;
        cout << times;
    }
    return 0;
}
