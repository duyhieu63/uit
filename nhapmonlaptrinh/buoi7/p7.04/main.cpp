#include <iostream>
#define MAX 101
using namespace std;

int main()
{
    double a[MAX][MAX],n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout <<  a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
