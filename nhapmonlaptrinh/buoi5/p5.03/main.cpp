#include <bits/stdc++.h>

using namespace std;
int biggest()
{
    int n;
    cin >> n;
    if(n==0)
    {
        return n;
    }
    else
    {
        return max(biggest(),n);
    }
}
//int largest_input()
//{
//    int n;
//    cin >> n;
//    int largest=0;
//    while(n!=0)
//    {
//        cin >> n;
//        largest=max(n,largest);
//    }
//    return largest;
//}
int main()
{
//    cout << biggest(n);
    cout << biggest();

    return 0;
}
