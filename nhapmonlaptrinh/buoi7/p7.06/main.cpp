#include <iostream>
#define MAXR 102
#define MAXC 102
using namespace std;

void NhapMaTran(double a[][MAXC],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
}
void isMaTranDC(double a[][MAXC],int n)
{
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==0)
                    {
                        cout << "No";
                        return;
                    }
                    continue;
            }
            if(a[i][j]!=0)
                   {
                        cout << "No";
                        return;
                    }
        }
    }
                        cout << "Yes";
                        return;
}

int main() {
    double a[MAXR][MAXC];
    int n1,n2;
    cin >> n1>> n2;
    int n=n1;
    NhapMaTran(a, n);
    isMaTranDC(a, n);
    return 0;
}
