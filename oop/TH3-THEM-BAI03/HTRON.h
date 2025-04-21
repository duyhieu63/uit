
#ifndef HTRON_H_INCLUDED
#define HTRON_H_INCLUDED
#include <bits/stdc++.h>
#include   "DIEM.h"
using namespace std;
class HTRON
{
private :
    DIEM tam;
    double R;
    static int dem;
public:
    ~HTRON();
    HTRON();
    HTRON(double);
    HTRON(const DIEM &,const double &);
    static int getDem();
    DIEM getTam();
    double getR();
    void setTam(const DIEM&);
    void setR(const double &);
    void Nhap();
    void Xuat() const;
    HTRON&operator=(const HTRON&);
    friend istream&operator>>(istream&,HTRON&);
    friend ostream&operator<<(ostream&,const HTRON&);
    double TinhChuvi();
    double TinhDienTich();
    bool KiemTraHopLe() const;
};
#endif // HTRON_H_INCLUDED
int HTRON::dem=0;
HTRON::~HTRON()
{
    cout << "Da huy 1 htron" << endl;
    dem--;
}
HTRON::HTRON():tam(0,0),R(1)
{
    dem++;
}
HTRON::HTRON(double R1):tam(0,0),R(R1)
{
    dem++;
}
HTRON::HTRON(const DIEM &d1,const double &R1):tam(d1),R(R1)
{
    dem++;
}
 int HTRON::getDem()
 {
     return dem;
 }
 DIEM HTRON::getTam()
 {
     return tam;
 }
 double HTRON::getR()
 {
     return R;
 }
    void HTRON::setTam(const DIEM&d1)
    {
        tam=d1;
    }
    void HTRON::setR(const double &R1)
    {
        R=R1;
    }
    void HTRON::Nhap()
    {
            cout << "\nNhap 1 diem la tam duong tron : ";
            cin >> tam;
                cout << "\nNhap ban kinh duong tron > 0 : ";
                cin >> R;
    }
    void HTRON::Xuat() const
    {
        if(this->KiemTraHopLe())
        cout << "Duong tron co tam ( " << tam.GetX() << ", " << tam.GetY() << ") va ban kinh la " << R << endl;
        else
            cout << "Hinh tron khong hop le" << endl;
    }
      HTRON&HTRON::operator=(const HTRON&htron)
      {
          if (this == &htron)
            return *this;
            else
                this->dem=htron.dem;
            this->R=htron.R;
          return *this;
      }
    istream&operator>>(istream&is,HTRON&htron)
    {
        htron.Nhap();
        return is;
    }
    ostream&operator<<(ostream&os,const HTRON&htron)
    {
        htron.Xuat();
        return os;
    }
    double HTRON::TinhChuvi()
    {
        return 3.14*R*2;
    }
    double HTRON::TinhDienTich()
    {
        return 3.14*R*R;
    }
    bool HTRON::KiemTraHopLe() const
    {
        if(R==0)
            return false;
        return true;
    }

