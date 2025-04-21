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
	int n;
	cin >> n;
	if(n<=1)
    {
        cout << -1;
    }
    else
    {
		if(prime[n]){
			cout << 1;
			return 0;
		}
		else
        {
            cout << 0;
        }
	}
	return 0;
}
