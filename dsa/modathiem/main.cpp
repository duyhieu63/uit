
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> nums[i][j];
        }
    }
    int ans=1e18;
    for(int i=0;i<n-2;i++)
    {
        int sum=0;
        int start=i;
        for(int j=0;j<m-2;j++)
        {
            int times=0;
            int temp=j;
            while(times<3)
            {
                sum+=nums[start][temp];
                start++;
                if(start==i+3)
                {
                    times++;
                    start=i;
                    temp++;
                }
            }
            ans=min(ans,sum);
        }
    }
    cout << ans << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int minSum = INT_MAX;
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            int currentSum = 0;
            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    currentSum += a[x][y];
                }
            }
            minSum = min(minSum, currentSum);
        }
    }

    cout << minSum << endl;

    return 0;
}
