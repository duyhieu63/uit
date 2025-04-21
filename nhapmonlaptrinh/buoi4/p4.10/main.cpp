#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll i;
    if(n%2==0)
    {
        i=2;
    }
    else
    {
        i=1;
    }
    ll number=1;
    for(;i<=n;i+=2)
    {
        number*=i;
    }
    cout << number;
    return 0;
}
