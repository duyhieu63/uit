#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
    return 0;
}
