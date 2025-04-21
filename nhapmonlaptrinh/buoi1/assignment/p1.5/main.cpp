#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b <<endl;
    cout << a << " - " << b << " = " << a-b<<endl;
    cout << a << " x " << b << " = " << a*b<<endl;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << a << " : " << b << " = " << float(a)/b;
    return 0;
}
