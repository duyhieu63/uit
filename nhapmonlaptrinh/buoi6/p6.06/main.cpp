#include <iostream>
#define MAX 100
using namespace std;

int main()
{
       int a[MAX],n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sl=0;
    int lon=a[0];
      for(int i=0;i<n;i++)
    {
        if(a[i]==lon)
            sl++;
    }
    cout << lon << endl<<sl;
    return 0;
}
