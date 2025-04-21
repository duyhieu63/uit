#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
int i=1;
if(n%10==0)
{
    while(n/i%10==0)
        i*=10;
}
int tong =0;
    while(n/i%10!=0)
    {
        tong+=n/i%10;
        i*=10;
    }
    cout << tong;
	return 0;
}
