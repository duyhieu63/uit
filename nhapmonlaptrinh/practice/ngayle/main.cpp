#include <bits/stdc++.h>

using namespace std;

int tinhNgayKyNiem(int x, int y, int m, int n) {
    tm t = {0};
    t.tm_mday = 0;  // Ngày bắt đầu
    t.tm_mon = m - 1;  // Tháng (0-11)
    t.tm_year = n - 1900;  // Năm (tính từ 1900)
    t.tm_wday = y - 2;  // Thứ (0-6), bắt đầu từ thứ 2
    int thutu=0;
    time_t time = mktime(&t);

    // Tìm ngày trong tháng thỏa mãn điều kiện về thứ
    while (true) {
        t = *localtime(&time);
        if(t.tm_wday==y-2)
        {
            thutu++;
        }
        if (t.tm_wday == y - 2 && thutu == x) {
                time += 86400;
        t = *localtime(&time);
         if (t.tm_mon != m - 1) {
            return -1;  // Không tìm thấy ngày
        }
            return t.tm_mday;
        }
        time += 86400;  // Tăng 1 ngày
        t = *localtime(&time);
        if (t.tm_mon != m - 1) {
              time -= 86400;
            return -1;  // Không tìm thấy ngày
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, m, n;
    cin >> x >> y >> m >> n;

    int result = tinhNgayKyNiem(x, y, m, n);

    if (result == -1) {
        cout << -1;
    } else {
        cout << result;
    }

    return 0;
}
