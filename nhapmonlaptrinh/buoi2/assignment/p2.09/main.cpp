#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,p,area;
    cin >> a >> b >> c;
    if( a<b+c && b<a+c && c<a+b )
    {
        p=(a+b+c)/2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << showpoint;
        cout << setprecision(2);
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout << "Tam giac vuong, dien tich = " << area;
        else if(a==b && b==c)
            cout << "Tam giac deu, dien tich = " << area;
        else if(a==b || a==c || b==c)
            cout << "Tam giac can, dien tich = " << area;
        else
            cout << "Tam giac thuong, dien tich = " << area;
    }
    else
        cout << "Khong phai tam giac";
    return 0;
}
