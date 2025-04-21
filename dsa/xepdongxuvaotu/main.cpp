
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total=0;
    int count=1;
    int ans=0;
    while(total<n)
    {
        total+=count;
        count++;
        ans++;
    }
    if(total==n)
    {
        cout << ans << endl;
    }
    else
        cout << ans-1 << endl;
    return 0;
}
