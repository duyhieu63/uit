#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> solucsau;
    if(n>=-9 && n<=9)
    {
        cout << "true";
    }
    else
    {
        int i=1;
        int sochuso=0;
    if(n%10==0)
    {
        cout << "false";
        return 0;
    }
    int tong =0;
    while(n/i%10!=0)
    {
        solucsau.push_back(n/i%10);
        i*=10;
        sochuso++;
        if(n/i%10==0 && n>i)
        {
             solucsau.push_back(n/i%10);
             i*=10;
        }
    }
    i/=10;
    for(int i1=0;i1<sochuso;i1++)
    {
        if(solucsau[i1]!=(n/i%10))
        {
            cout << "false";
            return 0;
        }
        i/=10;
    }
    cout << "true";
    }
	return 0;
}
