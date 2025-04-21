#include <iostream>
#define MAX 100
using namespace std;
       int al,bl,cl;
void them(int c[],int k,int x)
{
    for(int i=cl;i>k;i--)
    {
        c[i]=c[i-1];
    }
    cl++;
    c[k]=x;
}
int vitritrongc(int c[],int x)
{
    for(int i=0;i<cl;i++)
    {
        if(c[i]>=x)
            return i;
    }
    return cl;
}
int main()
{
       int a[MAX],b[MAX],c[MAX];
    cin >> al;
    cl=al;
    for(int i=0;i<al;i++)
    {
        cin >> a[i];
    }
    cin >> bl;
        for(int i=0;i<bl;i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<cl;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<bl;i++)
    {
        them(c,vitritrongc(c,b[i]),b[i]);
    }
    for(int i=0;i<cl;i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
