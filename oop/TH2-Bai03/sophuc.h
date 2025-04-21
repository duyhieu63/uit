#pragma once
#ifndef _sophuc
#define _sophuc
#include<bits/stdc++.h>
using namespace std;
class sophuc
{
    private:
    double a,b;
    public:
        ~sophuc();
        sophuc();
        void Nhap();
void Xuat();
friend istream&operator>>(istream&,sophuc &);
friend ostream&operator<<(ostream&,sophuc );
int dinhgtri();
friend sophuc cong(sophuc,sophuc);
friend sophuc tru(sophuc,sophuc);
friend sophuc nhan(sophuc,sophuc);
friend sophuc chia(sophuc,sophuc);
friend sophuc operator +(sophuc,sophuc);
friend sophuc operator -(sophuc,sophuc);
friend sophuc operator *(sophuc,sophuc);
friend sophuc operator /(sophuc,sophuc);
};
#endif
sophuc::~sophuc()
{
//    cout <<"Da huy so phuc"<<endl;
}
sophuc::sophuc()
{
    a=b=0;
}
void sophuc::Nhap()
{
    cout << " Nhap phan thuc a : ";
    cin >> a;
    cout << " Nhap phan ao b : ";
    cin >> b;
}
void sophuc::Xuat()
{
    if(b<0)
    {
           cout <<  "z = "<<a <<" - " << -b << "i" << endl;
    }
    else
    cout <<  "z = "<<a <<" + " << b << "i" << endl;
}
istream&operator>>(istream&is ,sophuc &sp)
{
  sp.Nhap();
  return is;
}
ostream&operator<<(ostream&os,sophuc sp)
{
    sp.Xuat();
    return os;
}
int sophuc::dinhgtri()
{
    return pow(a,2)+pow(b,2);
}
sophuc cong(sophuc sp1,sophuc sp2)
{
    sophuc kq;
    kq.a=sp1.a+sp2.a;
    kq.b=sp1.b+sp2.b;
    return kq;
}
sophuc tru(sophuc sp1,sophuc sp2)
{
    sophuc kq;
    kq.a=sp1.a-sp2.a;
    kq.b=sp1.b-sp2.b;
    return kq;
}
sophuc nhan(sophuc sp1,sophuc sp2)
{
    sophuc kq;
    kq.a=sp1.a*sp1.b-sp2.a+sp2.b;
    kq.b=sp1.a*sp2.b+sp2.a+sp1.b;
    return kq;
}
sophuc chia(sophuc sp1,sophuc sp2)
{
    sophuc kq;
    kq.a=(sp1.a*sp1.b+sp2.a+sp2.b)/(pow(sp1.b,2)+pow(sp2.b,2));
    kq.b=(sp2.a*sp1.b-sp1.a*sp2.b)/(pow(sp1.b,2)+pow(sp2.b,2));
    return kq;
}
sophuc operator +(sophuc sp1,sophuc sp2)
{
    return cong(sp1,sp2);
}
sophuc operator -(sophuc sp1,sophuc sp2)
{
    return tru(sp1,sp2);
}
sophuc operator *(sophuc sp1,sophuc sp2)
{
    return nhan(sp1,sp2);
}
sophuc operator /(sophuc sp1,sophuc sp2)
{
    return chia(sp1,sp2);
}
