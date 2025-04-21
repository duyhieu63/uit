#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c1,c2;
    int x;
    cin >> c1 >> c2;
    cin >> x;
    cout << "Ma ASCII cua ky tu " << "'" << c1 <<"'" <<  ","<<" '"<<c2<<"' " << "lan luot la " << int(c1) << " va " << int(c2) <<endl;
    cout << "Khoang cach giua hai ky tu " << "'" << c1 <<"'" <<  ","<<" '"<<c2<<"' la " << abs(int(c1)-int(c2))<<endl;
    cout << "Dang viet hoa cua ky tu " << "'" << c1 <<"' la " << "'" << char(c1-32)<<"'"<<endl;
    cout << x << " la ma ASCII cua ky tu " << "'" << char(x) << "'";
    return 0;
}
