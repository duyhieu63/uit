#include <iostream>

using namespace std;
int reverse(int n)
{
    static int s=0;
    static int p=0;
    if(n<10)
    {
        p=1;
        return n%10;
    }
    else
    {
        s=reverse(n/10);
        p*=10;
        s+=n%10*p;
        return s;
    }
}
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
