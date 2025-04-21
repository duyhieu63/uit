#include<iostream>
using namespace std;
bool snt ( int n ){
   if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true;  // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Exclude multiples of 2 and 3
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int sodaonguoc(int n)
{
    int res = 0;
    int tmp;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;
}
int check(int n)
{
    if(snt(sodaonguoc(n)) && snt(n))
        return true;
    return false;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int ans=0;
    if(a%2==0)
    a++;
    for(int i=a;i<=b;i+=2)
    {
        if(check(i))
            ans++;
    }
    cout << ans;
    return 0;
}
