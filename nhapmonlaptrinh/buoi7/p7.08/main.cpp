#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    double a[MAX][MAX];
    int n;
    cin >> n >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                     cout << "No";
                return 0;
                }
                int temp=i+1;
                while(a[temp][j]==0 &&temp<n)
                {
                    temp++;
                }
                if(temp<n)
                {
                    found++;
                }
                continue;
            }
            else if(i>j)
            continue;
            if(a[i][j]!=0 || found>1)
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
