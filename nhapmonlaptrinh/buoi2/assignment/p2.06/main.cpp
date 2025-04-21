#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,temp;
    cin >> a >> b >> c;
    if(b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(c>a)
    {
         temp=a;
        a=c;
        c=temp;
    }
    if(c>b)
    {
        temp=c;
        c=b;
        b=temp;
    }
    cout << c << " " << b << " " << a;
    return 0;
}
