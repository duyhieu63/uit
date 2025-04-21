#include "chuoi.h"

using namespace std;

int main()
{
    CHUOI str1;
    int chon;
     do
    {
        cout << "----------MENU XU LY CHUOI----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap chuoi" << endl;
        cout << "2.Xuat chuoi" << endl;
        cout << "3.Xac dinh do dai chuoi" << endl;
        cout <<"4.Dao chuoi" << endl;
        cout << "5.Noi 2 chuoi" << endl;
        cout << "6.Chuyen chuoi hoa thanh thuong" << endl;
        cout <<"7.Chuyen chuoi thuong hoa"<< endl;
        cin >> chon;
        switch(chon)
        {
        case 1:
            {
                cin.ignore();
                cin >> str1;
                break;
            }
        case 2:
            {
                cout <<"Chuoi la :"<< str1 << endl;
                break;
            }
        case 3:
            {
                cout << "Do dai cua chuoi la : " <<str1.XacDinhChieuDaiChuoi() << endl;
                break;
            }
        case 4:
            {
                str1.daochuoi();
                cout <<"Chuoi sau khi duoc dao la : " << str1 << endl;
                break;
            }
        case 5:
            {
                cin.ignore();
                CHUOI str2,str3;
                cout << "Nhap vao 2 chuoi de noi!" << endl;
                cin >>str2;
                cout <<"Nhap chuoi thu hai :" << endl;
                cin >> str3;
                CHUOI kq=noihaichuoi(str2,str3);
                cout << "Chuoi sau khi duoc noi la : "<<kq;
                break;
            }
        case 6:
            {
                str1.hoathanhthuong();
                cout << "Chuoi sau khi duoc chuyen la : " << str1 << endl;
                break;
            }
            case 7:
            {
                str1.thuongthanhhoa();
                cout << "Chuoi sau khi duoc chuyen la : " << str1 << endl;
                break;
            }
            case 0:
                {
                    cout <<"DANGTHOAT!"<<endl;
                    break;
                }
        }
    }while(chon!=0);
    return 0;
}
