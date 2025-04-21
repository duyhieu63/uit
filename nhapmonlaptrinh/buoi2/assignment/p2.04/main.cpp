#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double roundToNearestFraction(double a, int n) {
    double remainder = fmod(a * n, 1.0);
    if (remainder >= 0.5) {
        return a + (1.0 - remainder) / n;
    } else {
        return a - remainder / n;
    }
}

int main() {
    double a;
    int n;

    cout << "Nhap so thuc a: ";
    cin >> a;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    double result = roundToNearestFraction(a, n);
    cout << fixed << setprecision(10) << "Ket qua sau khi lam tron: " << result << endl;

    return 0;
}
