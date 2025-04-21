#include "phanso.h"
int main()
{
    int chon;
    do
    {
        Phanso ps1,ps2;
    cout << "----------CHUONG TRINH XU LY PHAN SO STRUCT----------" << endl;
    cout << "0: THOAT." << endl;
    cout << "1: Nhap 1 phan so,rut gon va xuat." << endl;
    cout << "2: Nhap 2 phan so, tim phan so lon nhat va xuat phan so lon nhat." << endl;
    cout << "3: Tinh toan 2 phan so." << endl;
    cout << "4: Nhap vao n phan so, sap xep theo tang dan hoac giam dan va xuat ra day phan so." << endl;
    cin >> chon;
    switch(chon)
    {
    case 0:
        cout << "Thoat chuong trinh..." << endl;
        break;
    case 1:
        Nhap(ps1);
        Xuat(ps1);
        break;
    case 2:
        Nhap(ps1);
        Nhap(ps2);
        TimMax(ps1,ps2);
        break;
    case 3:
        cout << "Nhap 2 phan so can tinh." << endl;
        Nhap(ps1);
        Nhap(ps2);
        int pheptoan;
        do
        {
            cout << "3.1 Tong" << endl;
            cout << "3.2 Hieu" << endl;
            cout << "3.3 Tich" << endl;
            cout << "3.4 Thuong" << endl;
            cout << "3.5 Quay lai" << endl;
            cin >> pheptoan;
            switch(pheptoan)
            {
            case 1:
                Tong(ps1,ps2);
                break;
            case 2:
                Hieu(ps1,ps2);
                break;
            case 3:
                Tich(ps1,ps2);
                break;
            case 4:
                Thuong(ps1,ps2);
                break;
            case 5:
            cout <<"Dang quay lai..." << endl;
            break;
            }
        } while(pheptoan!=5);
        break;
         case 4:
                {
                    int n;
                    cout << "Nhap so luong phan so can sap xep : ";
                    cin >> n;
                    Phanso *mang;
                    mang=new Phanso[n];
                    cout << "Chon 1 de theo thu tu tang dan." << endl;
                    cout << "Chon 2 de theo thu tu giam dan." << endl;
                    int thutu;
                    cin >> thutu;
                    if(thutu==1)
                    {
                        SapxepTangDan(mang,n);
                    }
                    else
                    {
                        SapxepGiamDan(mang,n);
                    }
                    for(int i=0;i<n;i++)
                    {
                        cout << mang[i].tu << "/" << mang[i].mau << " ";
                    }
                    cout << endl;
                }
    }
    }while(chon!=0);
    return 0;
}
