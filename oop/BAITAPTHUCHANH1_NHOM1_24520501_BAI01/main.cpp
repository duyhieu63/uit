#include "SOPHUC.h"
int main()
{
    int chon;
    SOPHUC sp1,sp2;
    Khoitao(sp1);
    Khoitao(sp2);
    do
    {
        cout << "----------MENU XU LY SO PHUC----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap so phuc" << endl;
        cout << "2.Xuat so phuc" << endl;
        cout << "3.Dinh gia tri so phuc" << endl;
        cout << "4.Tinh toan 2 sophuc" << endl;
        cout << "5.So sanh 2 so phuc dua tren module" << endl;
        cin >> chon;
        switch(chon)
        {
        case 1:
            Nhap(sp1);
            break;
        case 2:
            cout << "So phuc la : ";
            Xuat(sp1);
            break;
        case 3:
            cout << "Gia tri cua so phuc la : " << dinhgtri(sp1) << endl;
            break;
        case 4:
            cout << "Nhap 2 so phuc can tinh toan : " << endl;
            Nhap(sp1);
            Nhap(sp2);
            cout << "Nhap phep toan can tinh : + - * /  : " ;
            char pt;
            cin >> pt;
            if(pt=='+')
            {
                Xuat(sp1+sp2);
            }
            else if(pt=='-')
            {
                Xuat(sp1-sp2);
            }
            else if(pt=='*')
            {
                Xuat(sp1*sp2);
            }
            else
            {
                Xuat(sp1/sp2);
            }
        case 5:
            cout << "Nhap 2 so phuc can so sanh : " << endl;
              Nhap(sp1);
            Nhap(sp2);
            cout << "Nhap phep toan can so sanh 2 so phuc : > >= < <=  == != : " ;
            char ss;
            cin >> ss;
            if(ss=='>')
            {
                if(sp1>sp2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='>=')
            {
                if(sp1>=sp2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='<')
            {
                if(sp1<sp2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='<=')
            {
                if(sp1<=sp2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='==')
            {
                if(sp1==sp2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else
            {
                if(sp1!=sp2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            break;
        case 0:
            cout << "THOAT!";
            break;
        }
    }while(chon!=0);
    return 0;
}
