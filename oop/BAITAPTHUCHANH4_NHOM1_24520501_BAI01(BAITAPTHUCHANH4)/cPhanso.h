#pragma once
#ifndef _CPHANSO
#define _CPHANSO
#include <bits/stdc++.h>
using namespace std;
class CPHANSO
{
    private:
    int tu,mau;
    public:
        ~CPHANSO();
        CPHANSO();
        CPHANSO(int ,int);
        CPHANSO(int);
//        CPHANSO(double);
        int GetTu() const ;
        int GetMau ()const;
        void setTu(int );
        void SeTMau(int );
void Nhap()  ;
void Rutgon();
void Xuat();
double DinhGiatri();
friend CPHANSO Tong(CPHANSO, CPHANSO)  ;
friend CPHANSO Hieu(CPHANSO , CPHANSO );
friend CPHANSO Thuong(CPHANSO ,CPHANSO);
friend CPHANSO Tich(CPHANSO, CPHANSO);
friend istream&operator>>(istream&,CPHANSO &);
friend ostream&operator<<(ostream&,CPHANSO &);
friend CPHANSO operator+(const CPHANSO&,const CPHANSO&);
friend CPHANSO operator-(const CPHANSO&,const CPHANSO&);
friend CPHANSO operator/(const CPHANSO&,const CPHANSO&);
friend CPHANSO operator*(const CPHANSO&,const CPHANSO&);
friend bool operator==(const CPHANSO&,const CPHANSO&);
friend bool operator>(const CPHANSO&,const CPHANSO&);
friend bool operator>=(const CPHANSO&,const CPHANSO&);
friend bool operator<(const CPHANSO&,const CPHANSO&);
friend bool operator<=(const CPHANSO&,const CPHANSO&);
friend int TimUSCLN(int,int);
friend int BCNN(int , int );
};
#endif
CPHANSO::~CPHANSO()
{
//    cout << "DA huy 1 phan so" << endl;
}
CPHANSO::CPHANSO()
{
    tu=mau=0;
}
CPHANSO::CPHANSO(int t,int m):tu(t),mau(m)
{
}
CPHANSO::CPHANSO(int t)
{
    tu=t;
    mau=1;
}
//CPHANSO::CPHANSO(double a)
//{
//    int b=1;
//    while(a!=int(a))
//    {
//        a*=10;
//        b*=10;
//    }
//    tu=a;
//    mau=b;
//
//}
    int CPHANSO:: GetTu() const
    {
        return tu;
    }
     int CPHANSO:: GetMau() const
    {
        return mau;
    }
        void CPHANSO:: setTu(int t)
        {
            tu=t;
        }
        void CPHANSO::SeTMau(int m)
        {
            mau=m;
        }
void CPHANSO::Nhap()
{
    cout << "Nhap tu so: ";
    cin >> this->tu;
    do
    {
        cout << "Nhap mau so khac 0: ";
        cin >> this->mau;
    }while(this->mau==0);
}
istream&operator>>(istream&is,CPHANSO &ps)
{
    ps.Nhap();
    return is;
}
ostream&operator<<(ostream&os,CPHANSO &ps)
{
    ps.Xuat();
    return os;
}
void CPHANSO::Xuat()
{
    this->Rutgon();
      if(mau<0)
    {
        cout << -tu << "/" << -mau << endl;
    }
    else if(mau==-1)
    {
        cout << -tu << endl;
    }
    else if(mau==0)
    {
        cout << "Khong xac dinh" << endl;
    }
    else if(mau==1)
    {
        cout << tu << endl;
    }
    else
        cout << tu << "/" << mau << endl;
}
int TimUSCLN(int a,int b)
{
    int ucln;
    if(a==0||b==0)
    {
        ucln=a+b;
    }
    else
    {
        while(a!=b)
        {
            if(a>b)
            {
                a-=b;
            }
            else
                b-=a;
        }
        ucln=a;
    }
    return ucln;
}
int BCNN(int a, int b)
{
    int result = TimUSCLN(a, b);
    return a * b / result;
}
void CPHANSO::Rutgon()
{
    int ucln=TimUSCLN(tu,mau);
    if(ucln>0)
    {
        tu/=ucln;
        mau/=ucln;
    }
}
CPHANSO Tong(CPHANSO ps1,CPHANSO ps2)
{
        CPHANSO tong;
        int msc=BCNN(ps1.mau,ps2.mau);
        ps1.tu*=(msc/ps1.mau);
        ps2.tu*=(msc/ps2.mau);
        tong.tu=ps1.tu+ps2.tu;
        tong.mau=msc;
        cout << "Tong 2 phan so la : " ;
        return tong;
}
CPHANSO Hieu(CPHANSO ps1, CPHANSO ps2)
{
        CPHANSO hieu;
        int msc=BCNN(ps1.mau,ps2.mau);
        ps1.tu*=(msc/ps1.mau);
        ps2.tu*=(msc/ps2.mau);
        hieu.tu=ps1.tu-ps2.tu;
        hieu.mau=msc;
        cout << "Hieu 2 phan so la (Phan so dau tru phan so sau) : ";
        return hieu;
}
CPHANSO Tich(CPHANSO ps1,CPHANSO ps2)
{
    CPHANSO tich;
    tich.tu=ps1.tu*ps2.tu;
    tich.mau=ps1.mau*ps2.mau;
    cout << "Tich 2 phan so la : ";
    return tich;
}
CPHANSO Thuong(CPHANSO ps1,CPHANSO ps2)
{
    CPHANSO thuong;
    thuong.tu=ps1.tu*ps2.mau;
    thuong.mau=ps1.mau*ps2.tu;
    cout << "Thuong 2 phan so la : ";
    return thuong;
}
CPHANSO operator+(const CPHANSO &ps1,const CPHANSO &ps2)
{
    return Tong(ps1,ps2);
}
CPHANSO operator-(const CPHANSO &ps1,const CPHANSO &ps2)
{
    return Hieu(ps1,ps2);
}
CPHANSO operator/(const CPHANSO &ps1,const CPHANSO &ps2)
{
    return Thuong(ps1,ps2);
}
CPHANSO operator*(const CPHANSO &ps1 ,const CPHANSO &ps2)
{
    return Tich(ps1,ps2);
}
double CPHANSO::DinhGiatri()
{
    return double(tu)/mau;
}
bool operator==(const CPHANSO&ps1,const CPHANSO&ps2)
{
    return ps1.tu*ps2.mau==ps2.tu*ps1.mau;
}
bool operator>(const CPHANSO&ps1,const CPHANSO&ps2)
{
       return ps1.tu*ps2.mau>ps2.tu*ps1.mau;
}
bool operator>=(const CPHANSO&ps1,const CPHANSO&ps2)
{
       return ps1.tu*ps2.mau>=ps2.tu*ps1.mau;
}
bool operator<(const CPHANSO&ps1,const CPHANSO&ps2)
{
       return ps1.tu*ps2.mau<ps2.tu*ps1.mau;
}
bool operator<=(const CPHANSO&ps1,const CPHANSO&ps2)
{
       return ps1.tu*ps2.mau<=ps2.tu*ps1.mau;
}

