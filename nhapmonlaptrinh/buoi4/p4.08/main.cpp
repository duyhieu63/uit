#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    vector<int> solucsau;
        int i=1;
        int sochuso=0;
    while(n%10==0)
    {
        n=n/10;
    }
    int tong =0;
    while(n/i%10!=0)
    {
        solucsau.push_back(n/i%10);
        i*=10;
        sochuso++;
        if(n/i%10==0 && n>i)
        {
            while(n/i%10==0)
            {
             solucsau.push_back(n/i%10);
             i*=10;
             sochuso++;
            }
        }
    }
    i/=10;
    int number =0;
    for(int i1=0;i1<sochuso;i1++)
    {
        number+=solucsau[i1]*i;
        i/=10;
    }
    return number;
}
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}

