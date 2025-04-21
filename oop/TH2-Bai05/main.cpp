#include "NGAYTHANGNAM.h"

int main()
{
    NGAYTHANGNAM ntn;
     int chon;
    do
    {
        cout << "----------MENU XU LY NGAY THANG NAM----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap ngay thang nam, kiem tra tinh hop le" << endl;
        cout << "2.Xuat ngay thang nam" << endl;
        cout << "3.Tinh toan ngay thang nam nhap vao" << endl;
        cout << "4.Nhap vao ngay thang nam, xuat ra thu cua ngay do trong nam do" << endl;
        cout <<"5.Thay doi ngay thang nam" << endl;
        cout << "6.Lay ngay thang nam" << endl;
        cin >> chon;
        switch(chon)
        {
        case 1:
            cin >> ntn;
            break;
        case 2:
            cout << ntn;
            break;
        case 3:
            {
                cout << "Nhap thoi gian : " << endl;
            cin >> ntn;
            if(ntn.checkhople()==1)
            {
            cout << "Nhap phep toan can tinh : "  << endl;
            cout << "1.++" << endl;
            cout << "2.--" << endl;
            cout << "Nhap : ";
            int pt;
            cin >> pt;
            if(pt==1)
            {
                NGAYTHANGNAM kq=++ntn;
                cout << kq;
            }
            else
            {
                 NGAYTHANGNAM kq=--ntn;
                cout << kq;
            }
            }
            break;
            }
        case 4:
            cin >> ntn;
            if(ntn.checkhople()==1)
            {
            cout << "Ngay hom do roi vao ";
            ntn.thutrongtuan();
            }
            break;
        case 5:
            ntn.thaydoingaythangnam();
            break;
        case 6:
            ntn.layngaythangnam();
            break;
             case 0:
            cout << "THOAT!";
            break;
        }
    }while(chon!=0);
    return 0;
}
