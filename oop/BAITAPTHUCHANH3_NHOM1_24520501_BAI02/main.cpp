#include "HCN.h"

using namespace std;

int main()
{
    cout << "Co : " << DIEM::GetDem() << " diem" << endl;
    cout << "Co : " << HCN::getDem() << " hinh chu nhat" << endl;
    DIEM A(3,2),B(4,5);
    HCN hcn1,hcn2(A,B),hcn3(1,1,2,2);
      cout << "Co : " << DIEM::GetDem() << " diem" << endl;
    cout << "Co : " << HCN::getDem() << " hinh chu nhat" << endl;
    HCN hcn4;
    hcn4=hcn2;
    HCN hcn5(hcn3);
    cout << "Toa do 2 dinh cua cac hinh chu nhat la : ";
    cout << hcn1 << hcn2 << hcn3 << hcn4;
    cout << "Dien tich cua cac hinh chu nhat lan luot la : " << endl;
    cout << hcn1.TinhDientich() << " , " << hcn2.TinhDientich() << " , " << hcn3.TinhDientich() << " , " << hcn4.TinhDientich() << endl;
    cout << "Chu vi cua cac hinh chu nhat lan luot la : " << endl;
    cout << hcn1.TinhChuvi() << " , " << hcn2.TinhChuvi() << " , " << hcn3.TinhChuvi() << " , " << hcn4.TinhChuvi() << endl;
    cout << "Nhap 2 toa do vao de thay doi toa do A cua hcn2 : ";
    double x,y;
    cin >> x >> y;
    DIEM change(x,y);
    cout << "Hinh chu nhat 2 trc khi thay doi toa do A la : ";
    cout << hcn2;
    hcn2.SetA(change);
    cout << "Hinh chu nhat 2 sau khi thay doi toa do A la : ";
    cout << hcn2;
    cout << "Nhap 2 toa do vao de thay doi toa do B cua hcn3 : ";
    cin >> x >> y;
    change.SetX(x);
    change.SetY(y);
    cout << "Hinh chu nhat 3 trc khi thay doi toa do A la : ";
    cout << hcn3;
    hcn3.SetB(change);
    cout << "Hinh chu nhat 3 sau khi thay doi toa do B la : ";
    cout << hcn3;
    cout << "Nhap 2 so nguyen vao di chuyen toa do A cua hcn4 : ";
    cin >> x >> y;
    cout << "Hinh chu nhat 4 trc khi di chuyen la : ";
    cout << hcn4;
    hcn4.DiChuyendiemA(x,y);
    cout << "Hinh chu nhat 4 sau khi di chuyen la : ";
    cout << hcn4;
    cout << "Dien tich hinh chu nhat 4 sau khi di chuyen la : ";
    cout << hcn4.TinhDientich() << endl;
    cout << "Chu vi hinh chu nhat 4 sau khi di chuyen la : ";
    cout << hcn4.TinhChuvi() << endl;
    cout << "Nhap 2 so nguyen vao di chuyen toa do B cua hcn5 : ";
    cin >> x >> y;
    cout << "Hinh chu nhat 5 trc khi di chuyen la : ";
    cout << hcn5;
    hcn5.DiChuyendiemB(x,y);
    cout << "Hinh chu nhat 5 sau khi di chuyen la : ";
    cout << hcn5;
    cout << "Dien tich hinh chu nhat 5 sau khi di chuyen la : ";
    cout << hcn5.TinhDientich() << endl;
    cout << "Chu vi hinh chu nhat 5 sau khi di chuyen la : ";
    cout << hcn5.TinhChuvi() << endl;
    return 0;
}
