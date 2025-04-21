#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
        int n;
        cin >> n;
        vector<int> nums(n);
        for(auto &v:nums)
            cin >> v;
        sort(nums.begin(),nums.end());
        int i=0;
        for(;i<n;i++)
        {
            if(nums.at(i)>i)
            {
                cout << i;
                return 0;
            }
        }
        cout << i;
    return 0;
}
