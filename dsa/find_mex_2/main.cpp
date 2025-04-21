/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
sort
stable_sort
partial_sort
partial_sort_copy
sort_heap
set
multiset
map
unordered_map
###End banned keyword*/

#include <iostream>
#include <vector>
using namespace std;
void QuickSort(vector<int>&a,int l,int r)
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
int find_mex_1(vector<int>nums)
{
    QuickSort(nums,0,nums.size()-1);
    int i=0;
        for(;i<nums.size();i++)
        {
            if(nums[i]>i)
            {
                return i;
            }
        }
        return i;
}
int main()
{
    vector<int> mang(2*1e5);
    int n;
    cin >> n;
    vector<int> nums(n);
    int lonnhat=0;
    for(auto &v:nums)
        {
            cin >> v;
        }
            int start=0;
            for(int i=0;i<n;i++)
            {
                    if(start!=nums[i])
                    {
                        mang[nums[i]]++;
                            cout << start << " ";
                    }
                    else
                        {
                            mang[nums[i]]++;
                            while(start<=2*1e5 && mang[start]>0)
                            {
                                start++;
                            }
                            cout << start << " ";
                        }
            }
}
