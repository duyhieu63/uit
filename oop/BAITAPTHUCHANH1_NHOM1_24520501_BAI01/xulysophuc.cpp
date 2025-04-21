#include "SOPHUC.h"
void Khoitao(SOPHUC &sp)
{
    sp.a=0;
    sp.b=0;
}
void Nhap(SOPHUC &sp)
{
    cout << " Nhap phan thuc a : ";
    cin >> sp.a;
    cout << " Nhap phan ao b : ";
    cin >> sp.b;
}
void Xuat(SOPHUC sp)
{
    if(sp.b<0)
    {
           cout <<  "z = "<<sp.a <<" - " << -sp.b << "i" << endl;
    }
    else
    cout <<  "z = "<<sp.a <<" + " << sp.b << "i" << endl;
}
istream&operator>>(istream&is,SOPHUC &sp)
{
    Nhap(sp);
    return is;
}
ostream&operator<<(ostream&os,SOPHUC sp)
{
    Xuat(sp);
    return os;
}
int dinhgtri(SOPHUC sp)
{
    return pow(sp.a,2)+pow(sp.b,2);
}
SOPHUC cong(SOPHUC sp1,SOPHUC sp2)
{
    SOPHUC kq;
    Khoitao(kq);
    kq.a=sp1.a+sp2.a;
    kq.b=sp1.b+sp2.b;
    return kq;
}
SOPHUC tru(SOPHUC sp1,SOPHUC sp2)
{
    SOPHUC kq;
    Khoitao(kq);
    kq.a=sp1.a-sp2.a;
    kq.b=sp1.b-sp2.b;
    return kq;
}
SOPHUC nhan(SOPHUC sp1,SOPHUC sp2)
{
    SOPHUC kq;
    Khoitao(kq);
    kq.a=sp1.a*sp1.b-sp2.a+sp2.b;
    kq.b=sp1.a*sp2.b+sp2.a+sp1.b;
    return kq;
}
SOPHUC chia(SOPHUC sp1,SOPHUC sp2)
{
    SOPHUC kq;
    Khoitao(kq);
    kq.a=(sp1.a*sp1.b+sp2.a+sp2.b)/(pow(sp1.b,2)+pow(sp2.b,2));
    kq.b=(sp2.a*sp1.b-sp1.a*sp2.b)/(pow(sp1.b,2)+pow(sp2.b,2));
    return kq;
}
SOPHUC operator +(SOPHUC sp1,SOPHUC sp2)
{
    return cong(sp1,sp2);
}
SOPHUC operator -(SOPHUC sp1,SOPHUC sp2)
{
    return tru(sp1,sp2);
}
SOPHUC operator *(SOPHUC sp1,SOPHUC sp2)
{
    return nhan(sp1,sp2);
}
SOPHUC operator /(SOPHUC sp1,SOPHUC sp2)
{
    return chia(sp1,sp2);
}
bool operator>(SOPHUC sp1,SOPHUC sp2)
{
    return dinhgtri(sp1)>dinhgtri(sp2);
}
bool operator>=(SOPHUC sp1,SOPHUC sp2)
{
    return dinhgtri(sp1)>=dinhgtri(sp2);
}
bool operator<(SOPHUC sp1,SOPHUC sp2)
{
    return dinhgtri(sp1)<dinhgtri(sp2);
}
bool operator<=(SOPHUC sp1,SOPHUC sp2)
{
    return dinhgtri(sp1)<=dinhgtri(sp2);
}
bool operator==(SOPHUC sp1,SOPHUC sp2)
{
    return dinhgtri(sp1)==dinhgtri(sp2);
}
bool operator!=(SOPHUC sp1,SOPHUC sp2)
{
    return dinhgtri(sp1)!=dinhgtri(sp2);
}

