        /*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
#include <vector>
using namespace std;
void Sort(vector<int> &a,int x){
    int pos = 0;
    while (pos < a.size() && a[pos] < x) {
        pos++;
    }
      if (pos == a.size() || a[pos] != x)
        a.insert(a.begin() + pos, x);
}
int binarysearch(vector<int> &a,int x,int n)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
            return mid+1;
        else if(a[mid]>x)
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return 0;
}
int main(){
    vector<int> arr;
    do{
        int x,y; cin>>x;
        if(x==0) break;
        cin>>y;
        if(x==1){
            Sort(arr,y);
        }
        else{
            cout<<binarysearch(arr,y,arr.size())<< endl;
        }
    }while(1);
}
//###INSERT CODE HERE -
