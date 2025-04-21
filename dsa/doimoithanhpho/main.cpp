
    #include <iostream>
    #include <vector>
    using namespace std;

        long long a, k, b, m, n;

bool check(long long d) {
    long long total_a = ((d - d / k) * a)*1LL;
    long long total_b = ((d - d / m) * b)*1LL;
    return (total_a + total_b)*1LL >= n*1LL;
}

int main() {
    cin >> a >> k >> b >> m >> n;
    long long l = 1, r = (n / min(a, b))*1LL , ans = -1;
    while (l <= r) {
        long long mid = (l + (r - l) / 2)*1LL;

        if (check(mid)) {
            ans = mid*1LL;
            r = mid-1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
