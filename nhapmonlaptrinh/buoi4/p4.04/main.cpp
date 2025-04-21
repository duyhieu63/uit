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
std::vector<int> primeDivisors(int N, int M) {
    std::vector<int> divisors;
    for (int i = 2; i <= std::min(N, M); i++) {
        if (N % i == 0 && M % i == 0 && prime[i]) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int sum_common_prime(int N, int M) {
    sang();
    std::vector<int> divisors = primeDivisors(N, M);
    int sum = 0;
    for (int i = 0; i < divisors.size(); i++) {
        sum += divisors[i];
    }
    return sum == 0 ? -1 : sum;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
