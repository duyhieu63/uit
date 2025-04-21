#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin >> n;
    vector<int> solucsau;
        int i=1;
        int sochuso=0;
    int tong =0;
    while(n/i%10!=0 || n/i%10==0 && n>i)
    {
            solucsau.push_back(n/i%10);
        i*=10;
        sochuso++;
    }
    i/=10;
    int sosau=0;
    for(int i1=sochuso-1;i1>=0;i1--)
    {
        if(solucsau[i1]==1)
            tong++;
    }
    cout << tong;
}
