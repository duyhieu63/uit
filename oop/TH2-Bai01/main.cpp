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
    cout << "3: Tinh toan 2 phan so." << endl;
    cout << "4.Dinh gia tri phan so" << endl;
    cin >> chon;
    switch(chon)
    {
    case 1:
        cin >> ps1;
        break;
    case 2:
        cout << ps1;
        break;
    case 3:
         cout << "Nhap 2 phan so can tinh." << endl;
         cin >> ps1>>ps2;
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
                cout <<ps1.DinhGiatri() << endl;
                break;
    }
    }while(chon!=0);
    return 0;
}
