#include "DaGiac.h"
int main()
{
    DaGiac H;
    H.NhapDaGiac();
    float a, b;
    cin>>a>>b;
    H.PhongToDaGiac(a);
        cout << "Da Giac sau khi phong to la : " << endl;
    H.XuatDaGiac();
    cout << endl;
    H.QuayDaGiac(90);
    cout << "Da Giac sau khi quay 90 do la : " << endl;
    H.XuatDaGiac();
    cout << endl;
    H.ThuNhoDaGiac(a,b);
        cout << "Da Giac sau khi thu nho la : " << endl;
    H.XuatDaGiac();
    cout << endl;
    H.TinhTienDaGiac(a,b);
        cout << "Da Giac sau khi tinh tien la : " << endl;
    H.XuatDaGiac();
    cout << endl;
    return 0;
}
