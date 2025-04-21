#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float do_F;
    cin >> do_F;
    cout << (do_F-32)*5/9 << " "<<(do_F-32)/1.8+273.15;
    return 0;
}
