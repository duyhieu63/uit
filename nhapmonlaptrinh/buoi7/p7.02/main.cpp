#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);
int fibo[32];
void khoitaofibonacci()
{
    fibo[0]=fibo[1]=1;
        for(int i=2;i<=31;i++)
        {
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
}
int Sofibonacci(int n)
{
    return fibo[n-1];
}
void Nhapmang(int a[][MAX], int &n)
{
    cin >> n;
    khoitaofibonacci();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=Sofibonacci(i+j+1);
        }
    }
}
void Xuatmang(int a[][MAX], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);

    return 0;
}
