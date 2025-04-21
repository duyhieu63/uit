#include"NGAYTHANGNAM.h"
void Khoitao(NGAYTHANGNAM &ntn)
{
    ntn.ngay=ntn.thang=ntn.nam=0;
}
void Nhap(NGAYTHANGNAM &ntn)
{
    cout << "Nhap ngay : ";
    cin >> ntn.ngay;
    cout <<"Nhap thang : ";
    cin >> ntn.thang;
        cout <<"Nhap nam : ";
    cin >> ntn.nam;
}
void Xuat(NGAYTHANGNAM ntn)
{
    cout << ntn.ngay <<"/" << ntn.thang << "/" << ntn.nam << endl;
}
istream&operator>>(istream&is,NGAYTHANGNAM &ntn)
{
    Nhap(ntn);
    return is;
}
ostream&operator<<(ostream&os,NGAYTHANGNAM ntn)
{
        Xuat(ntn);
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
bool checkhople(NGAYTHANGNAM ntn)
{
    if(ntn.ngay<=0)
    {
        cout << "NGAY KHONG HOP LE" << endl;
        return 0;
    }
    else if(ntn.thang<0 || ntn.thang>12)
    {
         cout << "THANG KHONG HOP LE" << endl;
        return 0;
    }
    if(ntn.ngay>ngaycuathang(ntn.thang,ntn.nam))
    {
        cout << "NGAY KHONG HOP LE" << endl;
        return 0;
    }
    return 1;
}
NGAYTHANGNAM ngaytieptheo(NGAYTHANGNAM ntn)
{
    if(checkhople(ntn)==1)
    {
        if(ntn.ngay==ngaycuathang(ntn.thang,ntn.nam))
        {
            ntn.ngay=1;
            if(ntn.thang==12)
            {
                ntn.thang=1;
                ntn.nam++;
            }
            else
            {
                ntn.thang++;
            }
        }
        else
            ntn.ngay++;
    }
    return ntn;
}
NGAYTHANGNAM operator++(NGAYTHANGNAM&ntn)
{
    ntn=ngaytieptheo(ntn);
    return ntn;
}
NGAYTHANGNAM operator++(NGAYTHANGNAM&ntn,int)
{
    ntn=ngaytieptheo(ntn);
    return ntn;
}
NGAYTHANGNAM ngayhomqua(NGAYTHANGNAM ntn)
{
    if(checkhople(ntn)==1)
    {
        if(ntn.ngay==1)
        {
            if(ntn.thang==1)
            {
                ntn.ngay=31;
                ntn.thang=12;
                ntn.nam--;
            }
            else
                ntn.thang--;
        }
        else
            ntn.ngay--;
    }
    return ntn;
}
NGAYTHANGNAM operator--(NGAYTHANGNAM&ntn)
{
    ntn=ngayhomqua(ntn);
    return ntn;
}
NGAYTHANGNAM operator--(NGAYTHANGNAM&ntn,int)
{
    ntn=ngayhomqua(ntn);
    return ntn;
}
void thutrongtuan(NGAYTHANGNAM ntn)
{
    ntn.nam -= (14-ntn.thang)/12;
    ntn.thang += 12*((14-ntn.thang)/12)-2;
    int DayMax = (ntn.ngay + ntn.nam + ntn.nam/4 - ntn.nam/100 + ntn.nam/400 + (31*ntn.thang)/12)%7;

    if(!DayMax)
    {
        cout<<"Chu nhat" << endl;
    }
    else
    {
        cout<<"Thu "<<DayMax+1 << endl;
    }
}
