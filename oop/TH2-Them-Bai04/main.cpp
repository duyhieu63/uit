#include "tamgiac.h"

int main()
{
    tamgiac tg;
     int chon;
    do
    {
        cout << "----------MENU XU LY TAM GIAC----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap vao 1 tam giac" << endl;
        cout << "2.Xuat ra thong tin cua tam giac" << endl;
        cout << "3.Tinh chu vi tam giac" << endl;
        cout << "4.Tinh dien tich tam giac" << endl;
        cout <<"5.Kiem tra su hop le cua tam giac" << endl;
        cout <<"6.Phan loai tam giac" << endl;
        cin >> chon;
        switch(chon)
        {
        case 1:
            cin >> tg;
            break;
        case 2:
            if(tg.Hople())
            {
                cout << tg;
                cout << "Chu vi tam giac la : " <<tg.chuvi() << endl;
                cout << "Dien tich tam giac la : "<<tg.dientich() << endl;
            }
            else
            {
                cout << "3 canh nhap vao khong the tao thanh 1 tam giac" << endl;
            }
            break;
        case 3:
            if(tg.Hople())
            {
                 cout << "Chu vi tam giac la : " <<tg.chuvi() << endl;
            }
            else
            {
                cout << "3 canh nhap vao khong the tao thanh 1 tam giac" << endl;
            }
            break;
        case 4:
              if(tg.Hople())
            {
                cout << "Dien tich tam giac la : "<<tg.dientich() << endl;
            }
            else
            {
                  cout << "3 canh nhap vao khong the tao thanh 1 tam giac" << endl;
            }
            break;
        case 5:
             if(tg.Hople())
            {
                cout << "Day la tam giac hop le!" << endl;
            }
            else
            {
                cout << "3 canh nhap vao khong the tao thanh 1 tam giac" << endl;
            }
            break;
        case 6:
            {
                if(tg.Hople())
            {
                cout << "Day la tam giac " << tg.phanloai() << endl;
            }
            else
            {
                 cout << "3 canh nhap vao khong the tao thanh 1 tam giac" << endl;
            }
            break;
            }
        case 0:
            cout << "Thoat!" << endl;
            chon=0;
            break;
        }
    }while(chon!=0);
    return 0;
}
