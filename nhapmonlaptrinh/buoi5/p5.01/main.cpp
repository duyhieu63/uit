#include <bits/stdc++.h>

using namespace std;

bool snt ( int n ){
    if ( n<2 ) return false;
    for ( int i=2; i <= sqrt(n); i++){
        if ( n%i == 0) return false;
   }
   return true;
}



int TongNT ( int n ){
    int s = 0;
    int c = 0;
    int a = 2;
    while (c < n) {
        if (snt(a)) {
            s += a;
            c++;
        }
        a++;
    }
    return s;
}

int main (){
	int n; cin >> n;
	while ( n <= 0 || n > 50){
		cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." <<endl;
		cin >> n;
	}
	cout <<"Tong " << n << " so nguyen to dau tien la: " << TongNT(n);
	return 0;
}
