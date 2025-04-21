
#include <iostream>
using namespace std;
void inputArray(int *&a,int *&b,int *&c,int &n)
{
    cin >> n;
    a=new int[n];
    b=new int[n];
    c=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=c[i]=a[i];
    }
}
void outputArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
void outputArraysp1(int *a,int n,int pos)
{
    for(int i=0;i<n;i++)
    {
        if(i==pos)
            cout <<"[ ";
        cout << a[i] << " ";
    }
    cout << "]";
}
void BubleSort(int*&a,int n)
{
    int pos=n-1;
     for(int i=0,times=1;i<=n-1;i++,times++)
    {
        bool doicho=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    doicho=true;
                }
        }
        if(doicho==false)
                {
                    cout << "\nSau lan duyet thu " <<times-1 <<" mang da co thu tu";
                    return;
                }
                else
                {
                        cout << "\nMang sau lan duyet thu " << times <<" :";
        outputArraysp1(a,n,pos);
        pos--;
                }
    }
}
void outputArraysp2(int *a,int n,int pos)
{
    cout << "[ ";
    for(int i=0;i<n;i++)
    {
        if(i==pos)
            cout << a[i] << " ] ";
            else
                    cout << a[i] << " ";
    }
}
void BubleSort2(int*&a,int n)
{
    int pos=0;
     for(int i=n-1, times=1;i>=0;i--,times++)
    {
        bool doicho=false;
        for(int j=n-2;j>=n-i-1;j--)
        {
            if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    doicho=true;
                }
        }
        if(doicho==false)
                {
                    cout << "\nSau lan duyet thu " <<times-1 <<" mang da co thu tu";
                    return;
                }
                else
                {
                        cout << "\nMang sau lan duyet thu " << times <<" :";
        outputArraysp2(a,n,pos);
        pos++;
                }
    }
}
void outputArraysp3(int *a,int n,int left,int right)
{
    cout << "[ ";
    for(int i=0;i<n;i++)
    {
        if(i==left || i==right)
            {
                if(i==left)
                cout << a[i] << " ] ";
                else
                    cout << "[ " << a[i] <<" ";
            }
            else
                    cout << a[i] << " ";

    }
    cout << "]";
}
void ShakerSort(int *&c,int n)
{
//        bool doicho=false;
//        for(int j=right;j>left1;j--)
//        {
//            if(a[j]>a[j-1])
//                {
//                    swap(a[j],a[j1]);
//                    doicho=true;
//                    k=j+1;
//                }
//        }
//        left=pos1=k;
//         for(int j=left;j<n-left-1;j++)
//        {
//            if(a[j]>a[j+1])
//                {
//                    swap(a[j],a[j+1]);
//                    doicho=true;
//                    k=j+1;
//                }
//        }
//        right=pos2=k;
//                        cout << "\nMang sau lan duyet thu " << times <<" :";
//        outputArraysp3(a,n,pos1-1,+1);
//         if(doicho==false)
//                {
//                    cout << "\nSau lan duyet thu " <<times <<" mang da co thu tu";
//                    return;
//                }
//                times++;
//    }
int left=0, right=n-1, k=n-1, pass=0;
    while(left < right)
    {
        pass++;
        for(int i=right; i>left; i--)
        {
            if(c[i] < c[i-1])
            {
                swap(c[i], c[i-1]);
                k=i;
            }
        }
        left=k;
        for(int j=left; j<right; j++)
        {
            if(c[j] > c[j+1])
            {
                swap(c[j], c[j+1]);
                k=j;
            }
        }
        right=k;
        cout<<endl;
        cout<<"Mang sau lan duyet thu "<< pass <<" :";
        for(int i=0; i<n; i++)
        {
            if(i==left)
            {
                cout<<"] ";
            }
            if(i==0)
            {
                cout<<"[ "<<c[i]<<" ";
                continue;
            }
            if(i==right+1)
            {
                cout<<"[ ";
            }
            if(i==n-1)
            {
                cout<<c[i]<<" ]";
                continue;
            }
            cout<<c[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Sau lan duyet thu " << pass <<" mang da co thu tu ";
}
int main()
{
    int n, *a=NULL, *b=NULL, *c=NULL;
    inputArray(a,b,c,n);
    cout<<"Initial array: ";
    outputArray(a,n);
    cout<<"\n\nMethod 1: the maximum element goes to end";
    BubleSort(a,n);
    cout<<"\nSorted array : ";
    outputArray(a,n);
    cout<<"\n\nMethod 2: the minimum element goes to front";
    BubleSort2(b,n);
    cout<<"\nSorted array : ";
    outputArray(b,n);
    cout<<"\n\nMethod 3: Cocktail sort, Shaker sort, Cocktail shaker sort";
    ShakerSort(c,n);
    cout<<"\nSorted array : ";
    outputArray(c,n);
}
