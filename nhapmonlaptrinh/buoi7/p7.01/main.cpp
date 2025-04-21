#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    double a[MAX][MAX];
    int m,n;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
