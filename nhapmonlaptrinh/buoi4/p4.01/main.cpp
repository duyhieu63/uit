#include <bits/stdc++.h>
using namespace std;
int Input()
 {
int n;
cin >>n;
return n;
}
int sum_even_divisor(int N) {
    int evenDivisorsSum = 0;
    for (int i = 2; i <= N; i++) {
        if (N % i == 0 && i % 2 == 0) {
            evenDivisorsSum += i;
        }
    }
    if (evenDivisorsSum == 0) {
        return -1;
    } else {
        return evenDivisorsSum;
    }
}
