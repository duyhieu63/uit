#pragma once
#ifndef _DIEM
#define _DIEM
#include<bits/stdc++.h>
#define epsilon 0.000000001
using namespace std;
class DIEM
{
private:
    double x,y;
public:
    ~DIEM();
    DIEM(double =0,double =0);
    double GetX() const;
    double GetY()const;
    void SetX(double);
    void SetY(double);
    void SetXY(double,double);
    void Nhap();
    void Xuat() const;
    void DiChuyen(double,double);
    bool KiemtraTrung(const DIEM&) const;
    double TinhKhoangCach(const DIEM&) const;
    DIEM TimDoiXung() const;
    bool KiemTraTamGiacHopLe(const DIEM&,const DIEM&) const;
    double TinhChuviTamGiac(const DIEM&,const DIEM&) const;
    double TinhDienTichTamGiac(const DIEM&,const DIEM&) const;
    string PhanLoaiTamGiac(const DIEM&,const DIEM&) const;
};
DIEM::~DIEM()
{
    cout <<"Da huy mot diem"<< endl;
}
DIEM::DIEM(double x,double y)
{
    this->x=x;
    this->y=y;
}
double DIEM::GetX() const
{
    return x;
}
double DIEM::GetY() const
{
    return y;
}
void DIEM::SetX(double x)
{
    this->x=x;
}
void DIEM::SetY(double y)
{
    this->y=y;
}
void DIEM::SetXY(double x,double Y)
{
    this->x=x;
    this->y=y;
}
void DIEM::Nhap()
{
    cout <<"Nhap hoanh do";
    cin >> x;
    cout << "Nhap tung do";
    cin >> y;
}
void DIEM::Xuat() const
{
    cout << x << "," << y;
}
void DIEM::DiChuyen(double dx,double dy)
{
    x+=dx;
    y+=dy;
}
bool DIEM::KiemtraTrung(const DIEM&d) const
{
    return x==d.x && y==d.y;
}
double DIEM::TinhKhoangCach(const DIEM &d) const
{
    return sqrt(pow(x-d.x,2)+pow(y-d.y,2));
}
DIEM DIEM::TimDoiXung()const
{
    return DIEM(-x==0?x:-x,-y==0?y:-y);
}
bool DIEM::KiemTraTamGiacHopLe(const DIEM&d1,const DIEM &d2) const
{
    double a=this->TinhKhoangCach(d1);
    double b=d1.TinhKhoangCach(d2);
    double c=d2.TinhKhoangCach(*this);
    return a>0 && b>0 &&c>0 && a+b>c && b+c>a && a+c>b;
}
double DIEM::TinhChuviTamGiac(const DIEM&d1,const DIEM&d2) const
{
        double a=this->TinhKhoangCach(d1);
    double b=d1.TinhKhoangCach(d2);
    double c=d2.TinhKhoangCach(*this);
    return a+b+c;
}
double DIEM::TinhDienTichTamGiac(const DIEM&d1,const DIEM&d2) const
{
        double a=this->TinhKhoangCach(d1);
    double b=d1.TinhKhoangCach(d2);
    double c=d2.TinhKhoangCach(*this);
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
string DIEM::PhanLoaiTamGiac(const DIEM&d1,const DIEM&d2) const
{
        double a=this->TinhKhoangCach(d1);
    double b=d1.TinhKhoangCach(d2);
    double c=d2.TinhKhoangCach(*this);
    string kq;
    if(!KiemTraTamGiacHopLe(d1,d2))
    {
        kq="TG khong hop le";
    }
    else if(a==b && b==c)
    {
        kq="TG deu";
    }
    else if(a==b||b==c||c==a)
    {
        if(abs(a*a+b*b-c*c)<=epsilon||abs(a*a+c*c-b*b)<=epsilon||abs(b*b+c*c-a*a)<=epsilon)
        {
            kq="TG vuong can";
        }
        else
            kq="TG can";
    }
    else if(abs(a*a+b*b-c*c)<=epsilon||abs(a*a+c*c-b*b)<=epsilon||abs(b*b+c*c-a*a)<=epsilon)
    {
        kq="TG vuong";
    }
    else
        kq="TG thuong";
    return kq;
}
#endif
