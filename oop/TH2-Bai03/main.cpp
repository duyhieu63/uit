#include "sophuc.h"
int main()
{
    int chon;
    sophuc sp1,sp2;
    do
    {
        cout << "----------MENU XU LY SO PHUC----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap so phuc" << endl;
        cout << "2.Xuat so phuc" << endl;
        cout << "3.Dinh gia tri so phuc" << endl;
        cout << "4.Tinh toan 2 sophuc" << endl;
        cin >> chon;
        switch(chon)
        {
        case 1:
            cin >> sp1;
            break;
        case 2:
            cout << "So phuc la : ";
            cout << sp1;
            break;
        case 3:
            cout << "Gia tri cua so phuc la : " << sp1.dinhgtri() << endl;
            break;
        case 4:
            cout << "Nhap 2 so phuc can tinh toan : " << endl;
            cin >> sp1 >> sp2;
            cout << "Nhap phep toan can tinh : + - * /  : " ;
            char pt;
            cin >> pt;
            if(pt=='+')
            {
                sophuc kq= sp1+sp2;
                cout << kq;
            }
            else if(pt=='-')
            {
                sophuc kq= sp1-sp2;
                cout << kq;
            }
            else if(pt=='*')
            {
                sophuc kq= sp1*sp2;
                cout << kq;
            }
            else
            {
                sophuc kq= sp1/sp2;
                cout << kq;
            }
        case 0:
            cout << "THOAT!";
            break;
        }
    }while(chon!=0);
    return 0;
}
