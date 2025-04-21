#include "THOIGIAN.h"
int main()
{
     int chon;
    THOIGIAN tg1,tg2;
    Khoitao(tg1);
    Khoitao(tg2);
    do
    {
        cout << "----------MENU XU LY THOI GIAN----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap thoi gian" << endl;
        cout << "2.Xuat thoi gian" << endl;
        cout << "3.Tinh toan 2 thoi gian" << endl;
        cout << "4.So sanh 2 thoi gian dua tren giay" << endl;
        cin >> chon;
        switch(chon)
        {
    case 1:
        Nhap(tg1);
        break;
    case 2:
        Xuat(tg1);
        break;
    case 3:
        {
             cout << "Nhap 2 thoi gian can tinh toan : " << endl;
            Nhap(tg1);
            Nhap(tg2);
            cout << "Nhap phep toan can tinh : + -   : " ;
            char pt;
            cin >> pt;
            if(pt=='+')
            {
                Xuat(tg1+tg2);
            }
            else if(pt=='-')
            {
                Xuat(tg1-tg2);
            }
            break;
        }
    case 4:
         cout << "Nhap 2 thoi gian can so sanh : " << endl;
              Nhap(tg1);
            Nhap(tg2);
            cout << "Nhap phep toan can so sanh 2 so phuc : > >= < <=  == != : " ;
            char ss;
            cin >> ss;
            if(ss=='>')
            {
                if(tg1>tg2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='>=')
            {
                if(tg1>=tg2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='<')
            {
                if(tg1<tg2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='<=')
            {
                if(tg1<=tg2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else if(ss=='==')
            {
                if(tg1==tg2)
                    cout << "DUNG" << endl;
                else
                    cout << "SAI" << endl;
            }
            else
            {
                if(tg1!=tg2)
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
