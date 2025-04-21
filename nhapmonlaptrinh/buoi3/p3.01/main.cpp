#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    vector <int> fibonaci;
    fibonaci.push_back(0);
    fibonaci.push_back(1);
    if(x>30 || x<1)
    {
        cout << "So " << x<<" khong nam trong khoang [1,30].";
    }
    else
    {
        if(x==1)
        {
            cout << "1";
            return 0;
        }
        else if(x==2)
        {
            cout << "1";
            return 0;
        }
        else
        {
            for(int i=2;i<x+1;i++)
            {
             fibonaci.push_back(fibonaci[i-1]+fibonaci[i-2]);
            }
        }
        cout << fibonaci[x];
    }
    return 0;
}
