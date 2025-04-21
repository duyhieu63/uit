#include <bits/stdc++.h>
using namespace std;
int tonguoc(int n){
    int tong = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;
            }
        }
    }
    return tong;
}

int main(){
    int n;
    cin >> n;
   cout << tonguoc(n)-n;
}
