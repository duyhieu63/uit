
#include <iostream>
using namespace std;
#define MAX 300
int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
    int fibonaci[MAX];
    fibonaci[0]=0;
    fibonaci[1]=1;
    if(x==1)
        {
            return 1;
        }
        else if(x==2)
        {
            cout << "1";
            return 0;
        }
        else
        {
            for(int i=2;i<x+1;i++)
            {
             fibonaci[i]=fibonaci[i-1]+fibonaci[i-2];
            }
        }
        return fibonaci[x];
}
