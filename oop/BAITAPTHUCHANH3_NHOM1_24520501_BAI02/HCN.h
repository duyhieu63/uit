#pragma once
#ifndef _HCN
#define _HCN
#include<bits/stdc++.h>
#include "DIEM.h"
class HCN
{
private:
    DIEM A,B;
    static int dem;
    public:
    ~HCN();
    HCN();
    HCN(const DIEM&,const DIEM&);
    HCN(double,double,double,double);
    HCN(const HCN&);
    HCN&operator=(const HCN&);
    DIEM getA() const;
    DIEM getB() const ;
    static int getDem();
    void SetA(const DIEM&);
    void SetB(const DIEM&);
    friend istream&operator>>(istream&,HCN&);
    friend ostream&operator<<(ostream&,const HCN&);
    void Nhap();
    void Xuat() const;
    void DiChuyendiemA(double x,double y);
    void DiChuyendiemB(double x,double y);
    double TinhChuvi() const;
    double TinhDientich() const;
    bool KiemTraHopLe() const;
};
#endif
int HCN::dem=0;
HCN::~HCN()
{

}
HCN::HCN(): A(),B()
{
    dem++;
}
HCN::HCN(const DIEM&a,const DIEM&b) : A(a),B(b)
{
    dem++;
}
HCN::HCN(double xa,double xb,double ya,double yb) : A(xa,xb),B(ya,yb)
{
    dem++;
}
HCN::HCN(const HCN&hcn)
{
    this->A=hcn.A;
    this->B=hcn.B;
    dem++;
}
 HCN&HCN::operator=(const HCN&hcn)
 {
     this->A=hcn.A;
    this->B=hcn.B;
    return *this;
 }
 DIEM HCN::getA() const
 {
     return A;
 }
 DIEM HCN::getB() const
 {
     return B;
 }
 int HCN::getDem()
 {
     return dem;
 }
  void HCN::SetA(const DIEM&a)
  {
      this->A=a;
  }
    void HCN::SetB(const DIEM&b)
    {
        this->B=b;
    }
void HCN::Nhap()
{
    cout << "Nhap lan luot 2 toa do cua HCN: " << endl;
    cin >> A >> B;
}
void HCN::Xuat() const
{
    if(KiemTraHopLe())
    cout << "HCN co 2 dinh cheo nhau la  " << "A(" << A <<"), B(" <<B <<")"<< endl;
    else
        cout << "HCN khong hop le!" << endl;
}
bool HCN::KiemTraHopLe() const
{
    if(A.GetX()==B.GetX()||A.GetX()==B.GetY()||A.GetY()==B.GetX()||A.GetY()==B.GetY())
        return false;
    else
        return true;
}
 double HCN::TinhChuvi() const
 {
     if(KiemTraHopLe())
     return (abs(A.GetX()-B.GetX())+abs(A.GetY()-B.GetY()))*2;
        return -1;
 }
 double HCN::TinhDientich()const
 {
     if(KiemTraHopLe())
     return (abs(A.GetX()-B.GetX())*abs(A.GetY()-B.GetY()));
     return -1;
 }
   istream&operator>>(istream&is,HCN&hcn)
   {
       hcn.Nhap();
       return is;
   }
    ostream&operator<<(ostream&os,const HCN&hcn)
    {
        hcn.Xuat();
        return os;
    }
void HCN::DiChuyendiemA(double x,double y)
{
    A.DiChuyen(x,y);
}
void HCN::DiChuyendiemB(double x,double y)
{
    B.DiChuyen(x,y);
}
