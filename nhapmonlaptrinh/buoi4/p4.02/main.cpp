#include <bits/stdc++.h>
bool soCP(int n){
  int sqr = sqrt(n);
    if(sqr*sqr == n){
        return true;
    }
    else return false;
}
int sum_all_square(int N) {
    int all_square_sum = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && soCP(i)==true) {
            all_square_sum += i;
        }
    }
    if (all_square_sum == 0) {
        return -1;
    } else {
        return all_square_sum;
    }
}
