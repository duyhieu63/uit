#include <bits/stdc++.h>

using namespace std;
float calculate(int n)
{
    float temp,tong;
    temp=0;
    tong =0;
    for(int i=1;i<=n;i++)
    {
        tong = i + temp;
        temp=sqrt(tong);
    }
    return temp;
}
int main() {
	int n;
	cin >> n;
    cout << setprecision(3) << calculate(n);
}
