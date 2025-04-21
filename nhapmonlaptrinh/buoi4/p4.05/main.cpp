#include <bits/stdc++.h>
using namespace std;
void input(int &a)
{
    cin >> a;
}
int TongChuSo(int n){
int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
