#pragma once
#ifndef _tamgiac
#define _tamgiac
#include"Diem.h"
class tamgiac
{
private:
    DIEM A,B,C;
    static int dem;
public:
    ~tamgiac();
    tamgiac();
    tamgiac(const DIEM&,const DIEM&,const DIEM&);
    tamgiac(double,double,double,double,double,double);
    tamgiac(const tamgiac&);
    tamgiac&operator=(const tamgiac&);
    DIEM getA() const;
    DIEM getB() const;
    DIEM getC() const;
    static int getDem();
    void SetA(const DIEM&);
    void SetB(const DIEM&);
    void SetC(const DIEM&);
    void Nhap();
    void Xuat() const;
    friend istream&operator>>(istream&,tamgiac&);
    friend ostream&operator<<(ostream&,const tamgiac&);
    bool KiemTraTGHopLe() const;
    double TinhChuVi() const;
    double TinhDienTich() const;
    string PhanLoai() const;
    		void dichuyentamgiac() ;
};
#endif
int tamgiac::dem=0;
tamgiac::~tamgiac()
{
//    cout << "Da huy 1 tam giac" << endl;
}
tamgiac::tamgiac():A(0,0),B(0,1),C(1,0)
{
}
tamgiac::tamgiac(const DIEM&A,const DIEM&B,const DIEM &C):A(A),B(B),C(C)
{

}
tamgiac::tamgiac(double xa,double ya,double xb,double yb,double xc,double yc):A(xa,ya),B(xb,yb),C(xc,yc)
{

}
tamgiac::tamgiac(const tamgiac&tg) :A(tg.A),B(tg.B),C(tg.C)
{
}
tamgiac&tamgiac::operator=(const tamgiac &tg)
{
    A=tg.A;
    B=tg.B;
    C=tg.C;
    return *this;
}
DIEM tamgiac::getA() const
{
    return A;
}
DIEM tamgiac::getB() const
{
    return B;
}
DIEM tamgiac::getC() const
{
    return C;
}
int tamgiac::getDem()
{
    return dem;
}
void tamgiac::SetA(const DIEM &A)
{
    this->A=A;
}
void tamgiac::SetB(const DIEM &B)
{
    this->B=B;
}
void tamgiac::SetC(const DIEM &C)
{
    this->C=C;
}
void tamgiac::Nhap()
{
    cout << "Nhap lan luot toa do 3 tam giac : " << endl;
    cin >> A >> B >> C;
}
void tamgiac::Xuat() const
{
    cout << "Tam giac qua 3 dinh A(" << A << ")" << ", B(" << B << "), C" << C << ")" << endl;
}
istream&operator>>(istream&is,tamgiac&tg)
{
    tg.Nhap();
    return is;
}
ostream&operator<<(ostream&os,const tamgiac&tg)
{
    tg.Xuat();
    return os;
}
bool tamgiac::KiemTraTGHopLe() const
{
    return A.KiemTraTamGiacHopLe(B,C);
}
double tamgiac::TinhChuVi() const
{
    return A.TinhChuviTamGiac(B,C);
}
double tamgiac::TinhDienTich() const
{
    return A.TinhDienTichTamGiac(B,C);
}
string tamgiac::PhanLoai() const
{
    return A.PhanLoaiTamGiac(B,C);
}
void tamgiac::dichuyentamgiac()  {
    int x,y;
	cout<<"Nhap vao 2 so x y de di chuyen diem A:\n";
	cin >> x >> y;
	A.DiChuyen(x,y);
	cout<<"Nhap vao 2 so x y de di chuyen diem B:\n";
	cin >> x >> y;
	B.DiChuyen(x,y);
	cout<<"Nhap vao 2 so x y de di chuyen diem C:\n";
	cin >> x >> y;
	C.DiChuyen(x,y);
}
