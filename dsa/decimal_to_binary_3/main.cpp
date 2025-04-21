#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    if(n==0)
        cout << 0 << endl;
    else
    {
        while(n!=0)
        {
            s.push(n%2);
            n/=2;
        }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    }
    return 0;
}
