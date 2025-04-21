#include <bits/stdc++.h>
using namespace std;

int prime[10000001];

void sang(){
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
    sang();
    vector<int>::iterator it;
    int a,b,kq;
    cin >> a >> b;
    vector<int>daco;
    for(int i3=a;i3<=b;i3++)
    {
        int n=i3;
    vector<int> solucsau;
        int i=1;
        int sochuso=0;
    int tong =0;
    int tong1=0;
    while(n/i%10!=0 || n/i%10==0 && n>i)
    {
            solucsau.push_back(n/i%10);
        i*=10;
        sochuso++;
    }
    i/=10;
    int sosau=0;
    int temp=sochuso-1;
    for(int i1=0;i1<sochuso;i1++)
    {
        sosau+=solucsau[i1]*pow(10,temp);
        temp--;
        i/=10;
    }
    it = find (daco.begin(), daco.end(), n);
    if(it==daco.end())
    {
    it = find (daco.begin(), daco.end(), sosau);
    if(prime[n]&&prime[sosau]&&(sosau!=n)&&it==daco.end())
    {
        kq++;
        daco.push_back(sosau);
    }
    }
    }
    cout << kq;
	return 0;
}
