
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>mang(1e5+1,0);
        int n,k;
        cin >> n >> k;
        while(n--)
        {
            int value;
            cin >> value;
            mang[value]++;
        }
        int diverse=0;
        int multi_diverse=0;
        for(int i=1;i<=1e5;i++)
        {
            if(mang[i]==1)
            {
                diverse++;
            }
            else if(mang[i]>1)
            {
                multi_diverse++;
            }
        }
        if(multi_diverse>0)
        {
            bool ans=false;
            for(int i=1;i<=multi_diverse;i++)
            {
                if(((diverse+i*2)+(multi_diverse-i))/2==k)
                {
                    ans=true;
                    break;
                }
            }
            if(ans==true)
            {
                cout <<"YES"<<endl;
            }
            else
                cout <<"NO"<<endl;
        }
        else
        {
            if(diverse/2==k && diverse%2==0)
            {
                cout <<"YES"<<endl;
            }
            else
                cout <<"NO"<<endl;
        }
    }
}
