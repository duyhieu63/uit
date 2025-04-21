#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a>>b>>c;
    float p=((a+b+c))/2;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << sqrt(p*(p-a)*(p-b)*(p-c));
    return 0;
}
