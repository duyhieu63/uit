#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    double a[MAX][MAX];
    int n1,n2;
    cin >> n1>>n2;
    int n=n1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j)
            continue;
           if(a[i][j]!=a[j][i])
           {
               cout<<"No";
               return 0;
           }
        }
    }
    cout << "Yes";
    return 0;
}
