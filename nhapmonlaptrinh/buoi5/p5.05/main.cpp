#include <iostream>

using namespace std;
input(int &n)
{
    cin >> n;
}
int sum(int n,int &s)
{
       s+=n%10;
       if(n==0)
        return 0;
       return sum(n/10,s);
}
int main()
{
    int n, s=0;
    input(n);
    sum(n, s);
    cout << s;
    return 0;
}
