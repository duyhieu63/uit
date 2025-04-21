#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char>sta;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
            {
                sta.push(s[i]);
            }
            else if(s[i]==']'||s[i]=='}'||s[i]==')')
            {
                if(sta.empty())
                {
                    cout << 0;
                    return 0;
                }
                if(s[i]==')' && sta.top()=='(')
                {
                    sta.pop();
                }
                else if(s[i]=='}' && sta.top()=='{')
                {
                    sta.pop();
                }
                else if(s[i]==']' && sta.top()=='[')
                {
                    sta.pop();
                }
            }
    }
    if(sta.empty())
    {
        cout << 1;
    }
    else
        cout << 0;
    return 0;
}
