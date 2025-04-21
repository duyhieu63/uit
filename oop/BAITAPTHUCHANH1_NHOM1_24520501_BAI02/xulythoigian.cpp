#include "THOIGIAN.h"
void Khoitao(THOIGIAN &tg)
{
    tg.giay=tg.phut=tg.gio=0;
}
void Nhap(THOIGIAN &tg)
{
    cout << "Nhap gio : ";
    cin >> tg.gio;
    cout << "Nhap phut : ";
    cin >> tg.phut;
    cout << "Nhap giay : ";
    cin >> tg.giay;
}
void Xuat(THOIGIAN tg)
{
    cout << tg.gio << " gio " << tg.phut << " phut " << tg.giay << " giay"<<endl;
}
istream&operator>>(istream&is,THOIGIAN &tg)
{
    Nhap(tg);
    return is;
}
ostream&operator<<(ostream&os,THOIGIAN tg)
{
    Xuat(tg);
    return os;
}
int quydoiragiay(THOIGIAN tg)
{
    return tg.giay+tg.phut*60+tg.gio*3600;
}
THOIGIAN operator +(THOIGIAN tg1,THOIGIAN tg2)
{
    THOIGIAN kq;
    Khoitao(kq);
   int tong_giay=quydoiragiay(tg1)+quydoiragiay(tg2);
   if(tong_giay<60)
   {
       kq.giay=tong_giay;
   }
   else if(tong_giay>=60&&tong_giay<3600)
   {
       kq.phut=(tong_giay-tong_giay%60)/60;
        tong_giay%=60;
   }
   else
    {
        kq.gio=(tong_giay-tong_giay%3600)/3600;
        kq.phut=((tong_giay%3600)-(tong_giay%3600)%60)/60;
        kq.giay=tong_giay-kq.phut*60-kq.gio*3600;
    }
    if(kq.gio>=24)
    {
        kq.gio-=24;
    }
    return kq;
}
THOIGIAN operator -(THOIGIAN tg1,THOIGIAN tg2)
{
      THOIGIAN kq;
    Khoitao(kq);
   int hieu_giay=abs(quydoiragiay(tg1)-quydoiragiay(tg2));
   if(hieu_giay<60)
   {
       kq.giay=hieu_giay;
   }
   else if(hieu_giay>=60&&hieu_giay<3600)
   {
       kq.phut=(hieu_giay-hieu_giay%60)/60;
        hieu_giay%=60;
   }
   else
    {
        kq.gio=(hieu_giay-hieu_giay%3600)/3600;
        kq.phut=((hieu_giay%3600)-(hieu_giay%3600)%60)/60;
        kq.giay=kq.giay-kq.phut*60-kq.gio*3600;
    }
    if(kq.gio>=24)
    {
        kq.gio-=24;
    }
    return kq;
}
bool operator>(THOIGIAN tg1,THOIGIAN tg2)
{
    return quydoiragiay(tg1)>quydoiragiay(tg2);
}
bool operator>=(THOIGIAN tg1,THOIGIAN tg2)
{
    return quydoiragiay(tg1)>=quydoiragiay(tg2);
}
bool operator<(THOIGIAN tg1,THOIGIAN tg2)
{
    return quydoiragiay(tg1)<quydoiragiay(tg2);
}
bool operator<=(THOIGIAN tg1,THOIGIAN tg2)
{
    return quydoiragiay(tg1)<=quydoiragiay(tg2);
}
bool operator==(THOIGIAN tg1,THOIGIAN tg2)
{
    return quydoiragiay(tg1)==quydoiragiay(tg2);
}
bool operator!=(THOIGIAN tg1,THOIGIAN tg2)
{
    return quydoiragiay(tg1)!=quydoiragiay(tg2);
}
