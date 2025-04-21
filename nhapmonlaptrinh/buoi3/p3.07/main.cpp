#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double tong=1;
    for(int i=1;i<=n;i++)
    {
        double kq = pow(-1,i)/double(2*i+1);
            tong+=kq;
    }
    cout <<4*tong;
    return 0;
}
