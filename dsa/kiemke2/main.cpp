
#include <iostream>
#include <vector>
using namespace std;
bool cmp2(string a,string b)
{
    if(a.size()==b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
            return a[i]>b[i];
            }
        }
        return 0;
    }
    return a.size()>b.size();
}
bool cmp1(string a,string b)
{
    if(a.size()==b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
            return a[i]<b[i];
            }
        }
        return 0;
    }
    return a.size()<b.size();
}
void QuickSort2(vector<pair<string,int>>&a,int l,int r)
{
    int x=a[(l+r)/2].second;
    int i=l;
    int j=r;
    while(j>=i)
    {
        while(a[i].second>x)
            i++;
        while(a[j].second<x)
            j--;
        if(i<=j)
        {
                swap(a[i],a[j]);
        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort2(a,l,j);
    if(i<r)
        QuickSort2(a,i,r);
}
void QuickSort1(vector<pair<string,int>>&a,int l,int r)
{
    string x=a[(l+r)/2].first;
    int i=l;
    int j=r;
    while(j>=i)
    {
        while(cmp1(a[i].first,x)==1)
            i++;
        while(cmp2(a[j].first,x)==1)
            j--;
        if(i<=j)
        {
                swap(a[i],a[j]);
        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort1(a,l,j);
    if(i<r)
        QuickSort1(a,i,r);
}
void QuickSort(vector<string>&a,int l,int r)
{
    string x=a[(l+r)/2];
    int i=l;
    int j=r;
    while(j>=i)
    {
        while(cmp1(a[i],x)==1)
            i++;
        while(cmp2(a[j],x)==1)
            j--;
        if(i<=j)
        {
                swap(a[i],a[j]);
        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort(a,l,j);
    if(i<r)
        QuickSort(a,i,r);
}
int main()
{
    int n;
    cin >> n;
    vector<string>ma(n);
    for(auto &v: ma)
    {
        cin >> v;
    }
    if(n==0)
    {
        return 0;
    }
    QuickSort(ma,0,n-1);
    vector<pair<string,int>> hanghoa;
    for(int i=0;i<n;)
    {
        string cmp=ma[i];
        int sl=0;
        while(i<n && ma[i]==cmp)
        {
            i++;
            sl++;
        }
        hanghoa.push_back(make_pair(cmp,sl));
    }
    QuickSort2(hanghoa,0,hanghoa.size()-1);
    for(int i=0;i<hanghoa.size();)
    {
        int start=i;
        int cmp=hanghoa[i].second;
        while(i<n && hanghoa[i].second==cmp)
        {
            i++;
        }
        QuickSort1(hanghoa,start,i-1);
    }
    for(int i=0;i<hanghoa.size();i++)
    {
        cout << hanghoa[i].first << " " << hanghoa[i].second << endl;
    }
    return 0;
}
