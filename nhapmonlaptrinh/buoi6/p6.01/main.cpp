#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}
bool checksodau3(int n)
{
    int ans;
    while(n>0)
    {
        ans=n%10;
        n/=10;
    }
    if(ans==4)
        return true;
    else
        return false;
}
bool checksodau1(int n)
{
    int ans;
    while(n>0)
    {
        ans=n%10;
        n/=10;
    }
    if(ans==1)
        return true;
    else
        return false;
}
bool isBenford(int a[],int n)
{
    int sl4=0;
    int sl1=0;
    for(int i=0;i<n;i++)
    {
        if(checksodau3(a[i]))
        {
            sl4++;
        }
        else if(checksodau1(a[i]))
        {
            sl1++;
        }
    }
    if(sl4==1 && sl1==3)
        return true;
    else
        return false;
}
int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}

