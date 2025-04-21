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
    int tong1=0;
    while(n/i%10!=0 || n/i%10==0 && n>i)
    {
            solucsau.push_back(n/i%10);
        i*=10;
        sochuso++;
    }
    i/=10;
    int sosau=0;
    int temp=sochuso-1;
    for(int i1=0;i1<sochuso;i1++)
    {
        sosau+=solucsau[i1]*pow(10,temp);
        temp--;
        i/=10;
    }
    cout << sosau;
}
