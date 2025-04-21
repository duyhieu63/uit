#include <bits/stdc++.h>
using namespace std;
bool nam_nhuan(int nam)
{
    if(nam % 4 == 0 && nam % 100 != 0 || (nam % 400 == 0))
        return true;
    else
        return false;
}
int ngaycuathang(int thang, int nam)
{
    if (thang < 1 || thang > 12)
        return 0;
    if (thang == 2)
    {
        if (nam_nhuan(nam) == true)
            return 29;
        else
            return 28;
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        return 30;
    }
    return 31;
}

int main() {
    int nam, thang;
    cout << "Nhap nam: ";
    cin >> nam;
    if(nam<0)
    {
        cout << "Nam khong dung!" << endl;
        return 0;
    }
    cout << "Nhap thang: ";
    cin >> thang;
    int ngay = ngaycuathang(thang, nam);
    if (ngay == 0) {
        cout << "Thang khong dung!" << endl;
    } else {
        cout << "So ngay trong thang " << thang << "/" << nam << " la : " << ngay << endl;
    }
    return 0;
}
