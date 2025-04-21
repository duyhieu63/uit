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
        int tong=0;
		for(int i=3;i+2<n;)
        {
            if(prime[i]&&prime[i+2])
            {
                cout << i << ", " << i+2 <<endl;
                tong++;
            }
            i+=2;
        }
        cout << "Tong: " << tong << " cap so sinh doi < " << n;
	return 0;
}
