#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    if(a==0 && b==0)
        cout << "ℝ";
    else if(a==0 && b==1)
        cout << "Ø";
    else
    cout << "{"<<-b/a<<"}";

}
