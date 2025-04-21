#include <bits/stdc++.h>

using namespace std;

int main()
{
    float t,l,h;
    cin >> t >> l >> h;
    float dtb = (t+l+h)/3;
    dtb = round(dtb * 100) / 100.0;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "DTB = " << dtb <<endl << "Loai: ";
    if(dtb>=9)
    {
        cout << "XUAT SAC";
    }
    else if(dtb>=8)
    {
        cout << "GIOI";
    }
    else if(dtb>=7)
    {
        cout << "KHA";
    }
    else if(dtb>=6)
    {
        cout << "TB KHA";
    }
    else if(dtb >=5)
    {
        cout << "TB";
    }
    else if(dtb >=4)
    {
            cout << "YEU";
    }
    else
    {
        cout << "KEM";
    }
    return 0;
}

