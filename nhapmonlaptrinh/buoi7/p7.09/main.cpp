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
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans[i][j]=a[i][j]+ b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout <<  ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
