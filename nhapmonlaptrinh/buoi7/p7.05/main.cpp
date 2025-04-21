#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
    double a[MAX][MAX],n1,n2;
    cin >> n1 >> n2;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin >> a[i][j];
        }
    }
    double sum=0;
    for(int id=0;id<n1;id++)
    {
        sum+=a[id][id];
    }
    cout << sum;
    return 0;
}
