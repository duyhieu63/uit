#ifndef _NGAYTHANGNAM
#define _NGAYTHANGNAM
#include<bits/stdc++.h>
using namespace std;
class NGAYTHANGNAM
{
    private:
    int ngay,thang,nam;
    public:
void Nhap();
void Xuat();
void thaydoingaythangnam();
void layngaythangnam();
friend istream&operator>>(istream&,NGAYTHANGNAM &);
friend ostream&operator<<(ostream&,NGAYTHANGNAM );
bool checkhople();
friend bool nam_nhuan(int);
friend int ngaycuathang(int , int);
void ngaytieptheo();
friend NGAYTHANGNAM operator++(NGAYTHANGNAM&);
void ngayhomqua();
friend NGAYTHANGNAM operator--(NGAYTHANGNAM&);
void thutrongtuan();
};
#endif
void NGAYTHANGNAM::Nhap()
{
    cout << "Nhap ngay : ";
    cin >> ngay;
    cout <<"Nhap thang : ";
    cin >> thang;
        cout <<"Nhap nam : ";
    cin >> nam;
}
void NGAYTHANGNAM::Xuat()
{
    cout << ngay <<"/" << thang << "/" << nam << endl;
}
istream&operator>>(istream&is,NGAYTHANGNAM &ntn)
{
    ntn.Nhap();
    return is;
}
ostream&operator<<(ostream&os,NGAYTHANGNAM ntn)
{
        ntn.Xuat();
    return os;
}
bool nam_nhuan(int nam)
{
    if(nam % 4 == 0 && nam % 100 != 0 || (nam % 400 == 0))
        return true;
    else
        return false;
}
int ngaycuathang(int thang, int nam)
{
    if (thang < 1 || thang > 12)
        return 0;
    if (thang == 2)
    {
        if (nam_nhuan(nam) == true)
            return 29;
        else
            return 28;
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        return 30;
    }
    return 31;
}
bool NGAYTHANGNAM::checkhople()
{
    if(ngay<=0)
    {
        cout << "NGAY KHONG HOP LE" << endl;
        return 0;
    }
    else if(thang<0 || thang>12)
    {
         cout << "THANG KHONG HOP LE" << endl;
        return 0;
    }
    if(ngay>ngaycuathang(thang,nam))
    {
        cout << "NGAY KHONG HOP LE" << endl;
        return 0;
    }
    return 1;
}
void NGAYTHANGNAM::ngaytieptheo()
{
    if(this->checkhople()==1)
    {
        if(ngay==ngaycuathang(thang,nam))
        {
            ngay=1;
            if(thang==12)
            {
                thang=1;
                nam++;
            }
            else
            {
                thang++;
            }
        }
        else
            ngay++;
    }
}
NGAYTHANGNAM operator++(NGAYTHANGNAM&ntn)
{
    ntn.ngaytieptheo();
    return ntn;
}
void NGAYTHANGNAM::ngayhomqua()
{
    if(this->checkhople()==1)
    {
        if(ngay==1)
        {
            if(thang==1)
            {
                ngay=31;
                thang=12;
                nam--;
            }
            else
                thang--;
        }
        else
            ngay--;
    }
}
NGAYTHANGNAM operator--(NGAYTHANGNAM&ntn)
{
    ntn.ngayhomqua();
    return ntn;
}
void NGAYTHANGNAM::thutrongtuan()
{
    nam -= (14-thang)/12;
    thang += 12*((14-thang)/12)-2;
    int DayMax = (ngay + nam + nam/4 - nam/100 + nam/400 + (31*thang)/12)%7;

    if(!DayMax)
    {
        cout<<"Chu nhat" << endl;
    }
    else
    {
        cout<<"Thu "<<DayMax+1 << endl;
    }
}
void NGAYTHANGNAM::thaydoingaythangnam()
{
    cout << "Ban muon thay doi cai gi : " << endl;
    cout << "1.Ngay!" << endl;
    cout << "2.Thang!" << endl;
    cout << "3.Nam!" << endl;
    int choose;
    cin >> choose;
    if(choose==1)
    {
        cout << "Nhap vao ngay ban muon thay doi : ";
        cin >> choose;
        this->ngay=choose;
    }
    else if(choose==2)
    {
         cout << "Nhap vao thang ban muon thay doi : ";
        cin >> choose;
        this->thang=choose;
    }
    else
    {
         cout << "Nhap vao thang ban muon thay doi : ";
        cin >> choose;
        this->nam=choose;
    }
    cout <<"Thoi gian sau khi thay doi la : " << endl;
    this->Xuat();
}
void NGAYTHANGNAM::layngaythangnam()
{
     cout << "Ban muon lay cai gi : " << endl;
    cout << "1.Ngay!" << endl;
    cout << "2.Thang!" << endl;
    cout << "3.Nam!" << endl;
    int choose;
    cin >> choose;
    if(choose==1)
    {
        cout << "Ngay : " << this->ngay << endl;
    }
    else if(choose==2)
    {
           cout << "Thang : " << this->thang << endl;
    }
    else
    {
          cout << "Nam : " << this->nam << endl;
    }
}
