#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    float a[MAX][MAX],b[MAX][MAX],ans[MAX][MAX];
    int m,n;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    int l,k;
    cin >> l >> k;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            for(int k=0;k<m;k++)
            {
                ans[i][j]+=a[i][k]*b[k][j];
            }
            cout << endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
