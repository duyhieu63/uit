#include "cPhanso.h"
int main()
{
    int chon;
       CPHANSO ps1,ps2;
    do
    {
    cout << "----------CHUONG TRINH XU LY PHAN SO CLASS----------" << endl;
    cout << "0: THOAT." << endl;
    cout << "1: Nhap 1 phan so." << endl;
    cout << "2.Xuat 1 phan so." << endl;
    cout << "3.Tinh toan 2 phan so." << endl;
    cout << "4.So sanh 2 phan so." << endl;
    cout << "5.Dinh gia tri phan so" << endl;
    cin >> chon;
    switch(chon)
    {
    case 1:
        {
            int nhap;
            cout << "1. Chi nhap 1 so nguyen" << endl;
            cout << "2. Nhap ca tu va mau" << endl;
            cout << "--> Lua chon cua ban la : "; cin >> nhap;
            if(nhap==2)
            cin >> ps1;
            else
            {
                int x;
                cout << "Nhap 1 so nguyen de chuyen thanh phan so : ";
                cin >> x;
                CPHANSO ps3(x);
                ps1=ps3;
            }
        break;
        }
    case 2:
        cout << ps1;
        break;
    case 3:
         cout << "Nhap phan so thu 2 de tinh." << endl;
         cin >> ps2;
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
                {
                    CPHANSO tong=ps1+ps2;
                cout<< tong;
                break;
                }
            case 2:
                  {
                      CPHANSO hieu=ps1-ps2;
                cout<< hieu;
                break;
                  }
            case 3:
                  {
                      CPHANSO tich=ps1*ps2;
                cout<< tich;
                break;
                  }
            case 4:
                  {
                      CPHANSO thuong=ps1/ps2;
                cout<< thuong;
                break;
                  }
            case 5:
            cout <<"Dang quay lai..." << endl;
            break;
            }
        } while(pheptoan!=5);
        break;
            case 4:
                {
                     cout << "Nhap phan so thu 2 de so sanh." << endl;
         cin >> ps2;
        int pheptoan;
        do
        {
            cout << "4.1 ==" << endl;
            cout << "4.2 >" << endl;
            cout << "4.3 >=" << endl;
            cout << "4.4 <" << endl;
            cout << "4.5 <=" << endl;
            cout << "4.6 Quay lai" << endl;
            cin >> pheptoan;
            switch(pheptoan)
            {
            case 1:
                if(ps1==ps2)
                {
                    cout << "Phan so 1 bang phan so 2" << endl;
                }
                else
                {
                     cout << "Phan so 1 khong bang phan so 2" << endl;
                }
                break;
            case 2:
                if(ps1>ps2)
                {
                    cout << "Phan so 1 lon hon phan so 2" << endl;
                }
                else
                {
                     cout << "Phan so 1 khong lon hon phan so 2" << endl;
                }
                break;
                case 3 :
                      if(ps1>=ps2)
                {
                    cout << "Phan so 1 lon hon hoac bang phan so 2" << endl;
                }
                else
                {
                     cout << "Phan so 1 khong lon hon hoac bang phan so 2" << endl;
                }
                break;
                case 4:
                     if(ps1<ps2)
                {
                    cout << "Phan so 1 be hon phan so 2" << endl;
                }
                else
                {
                     cout << "Phan so 1 khong be hon phan so 2" << endl;
                }
                break;
                case 5:
                      if(ps1==ps2)
                {
                    cout << "Phan so 1 be hon hoac bang phan so 2" << endl;
                }
                else
                {
                     cout << "Phan so 1 khong be hon hoac bang phan so 2" << endl;
                }
                break;
                case 6:
                    cout << "Dang Quay lai" << endl;
                    break;
            }
        }while(pheptoan!=6);
                }
            case 5:
                cout <<ps1.DinhGiatri() << endl;
                break;
    }
    }while(chon!=0);
    return 0;
}
