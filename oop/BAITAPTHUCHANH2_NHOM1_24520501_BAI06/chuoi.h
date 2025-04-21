#pragma once
#ifndef _CHUOI
#define _CHUOI
#include <bits/stdc++.h>
using namespace std;
class  CHUOI
{
    private:
    char str[1000];
    public:
    ~CHUOI();
    CHUOI();
    int XacDinhChieuDaiChuoi() const;
    void NHAP();
    void XUAT();
    void daochuoi();
    void hoathanhthuong();
        void thuongthanhhoa();
    friend CHUOI noihaichuoi( const CHUOI&,const CHUOI&) ;
      friend istream& operator>>(istream&,CHUOI&);
    friend ostream& operator<<(ostream&,const CHUOI&);
};
CHUOI::~CHUOI()
{
//    cout <<"Da huy 1 chuoi" << endl;
}
CHUOI::CHUOI()
{
//    cout <<"Goi ham thiet lap mac dinh!" << endl;
    str[0]='\0';
}
int CHUOI::XacDinhChieuDaiChuoi() const
{
    int sl=0;
    for(int i=0;str[i]!='\0';i++)
    {
        sl++;
    }
    return sl;
}
void CHUOI::NHAP()
{
    cout <<"Nhap 1 chuoi : ";
    cin.getline(str,1000);
    return;
}
void CHUOI::XUAT()
{
    for(int i=0;str[i]!='\0';i++)
    {
        cout <<str[i];
    }
    cout << endl;
}
istream &operator>>(istream &is ,CHUOI &str)
{
    str.NHAP();
    return is;
}
ostream& operator<<(ostream& os ,CHUOI &str)
 {
     str.XUAT();
     return os;
 }
CHUOI noihaichuoi(const CHUOI&a,const CHUOI&b)
  {
      CHUOI kq;
      int id=0;
      for(int i=0;i<a.XacDinhChieuDaiChuoi();i++,id++)
      {
          kq.str[id]=a.str[i];
      }
      for(int i=0;i<b.XacDinhChieuDaiChuoi();i++,id++)
      {
          kq.str[id]=b.str[i];
      }
      kq.str[id]='\0';
      return kq;
  }
void  CHUOI::daochuoi()
  {
      int len= this->XacDinhChieuDaiChuoi();
      char temp[len];
      for(int i=0;i<len;i++)
      {
          temp[i]=this->str[i];
      }
      int j=len;
      for(int i=0;i<j;i++,len--)
      {
          this->str[i]=temp[len-1];
      }
  }
  void CHUOI::hoathanhthuong()
  {
      int len=this->XacDinhChieuDaiChuoi();
      for(int i=0;i<len;i++)
      {
          this->str[i]=(this->str[i]+32);
      }
  }
  void CHUOI::thuongthanhhoa()
  {
       int len=this->XacDinhChieuDaiChuoi();
      for(int i=0;i<len;i++)
      {
          this->str[i]=((this->str[i])-32);
      }
  }
#endif
