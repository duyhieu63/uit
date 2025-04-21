
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int n,k;
    cin  >> n >> k;
    vector<int> students(n);
    for(auto &v:students)
        cin >> v;
     vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
             ans[(i+k%n+n)%n]=students[i];
    }
    for(auto v:ans)
        cout << v <<" ";
    return 0;
}
