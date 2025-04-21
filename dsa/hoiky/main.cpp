#include <bits/stdc++.h>

long long n, k;
    vector<long long> nums(n);

bool validate(long long x) {
	long long sl = 0;
	long long pages = 0;
	long long lpages = 0;
			long long total=0;
	while (pages < n && sl<=k) {
		if (pages == lpages) { sl++; }
		if(nums[lpages]>x)
        {
            pages++;
            lpages=pages;
            total=0;
            continue;
        }
		if (nums[pages] + total > x)
        {
			lpages = pages;
			total=0;
		} else {
			total+=nums[pages];
			pages++;
		}
	}
	return sl <= k;
}

int main()
{
    cin >> n >> k;
    nums.resize(n);
    for(auto &v:nums)
        cin >> v;
    long long l=*max_element(nums.begin(),nums.end());
    long long r=1e16;
    long long ans;
    while(l<=r)
    {
        long long mid=l+(r-l)/2;
        if(validate(mid))
        {
            r=mid-1;
            ans=mid;
        }
        else
            l=mid+1;
    }
    cout << ans;
    return 0;
}
