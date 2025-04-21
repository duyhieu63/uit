#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//void Swap(int &x,int &y)
//{
//    int tg;
//    tg=x;
//    x=y;
//    y=tg;
//}
int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll n;
     cin >> n;
    vector<int> solucsau;
        int i=1;
        int sochuso=0;
    while(n/i%10!=0 || n/i%10==0 && n>i)
    {
            solucsau.push_back(n/i%10);
        i*=10;
        sochuso++;
    }
//    while(true)
//    {
//            for(i=sochuso-1;i>=0;i--)
//            {
//                if(i==0)
//                    return 0;
//                if(solucsau[i-1]>solucsau[i])
//                    break;
//            }
//            for(int j=sochuso-1;j>=i-1;j--)
//            {
//                if(solucsau[j]<solucsau[i-1])
//                {
//                    Swap(solucsau[j],solucsau[i-1]);
//                    sort(solucsau.begin()+i,solucsau.end(),greater<int>());
//                    for(auto &v:solucsau)
//                        cout << v;
//                    cout <<endl;
//                        break;
//                }
//            }
//    }
do {
    for(auto &v:solucsau)
        cout << v;
    cout <<endl;
  } while ( std::prev_permutation(solucsau.begin(),solucsau.end()) );

}
