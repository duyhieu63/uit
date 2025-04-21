
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

bool checksnt(int n)
{
    if(n==2)
        return true;
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}
void NhapmangSNT(int a[], int &n)
{
    cin >> n;
    int sl=0;
    int i=0;
    int num=2;
    while(sl<n)
    {
        if(checksnt(num))
            {
                a[i]=num;
                i++;
                sl++;
            }
            num++;
    }
}
bool checksoy(int n,int y)
{
    int digits;
    while(n>0)
    {
        digits=n%10;
        if(digits==y)
        {
            return true;
        }
        n/=10;
    }
    return false;
}
int SoPhanTuChuaY(int a[], int n,int y)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(checksoy(a[i],y))
            ans++;
    }
    return ans;
}
int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}
