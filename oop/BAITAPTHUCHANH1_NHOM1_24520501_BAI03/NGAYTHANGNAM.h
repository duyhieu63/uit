#ifndef _NGAYTHANGNAM
#define _NGAYTHANGNAM
#include<bits/stdc++.h>
using namespace std;
struct NGAYTHANGNAM
{
    int ngay,thang,nam;
};
void Khoitao(NGAYTHANGNAM &);
void Nhap(NGAYTHANGNAM &);
void Xuat(NGAYTHANGNAM);
istream&operator>>(istream&,NGAYTHANGNAM &);
ostream&operator<<(ostream&,NGAYTHANGNAM );
bool checkhople(NGAYTHANGNAM);
bool nam_nhuan(int);
int ngaycuathang(int , int);
NGAYTHANGNAM ngaytieptheo(NGAYTHANGNAM);
NGAYTHANGNAM operator++(NGAYTHANGNAM&);
NGAYTHANGNAM operator++(NGAYTHANGNAM&,int);
NGAYTHANGNAM ngayhomqua(NGAYTHANGNAM ntn);
NGAYTHANGNAM operator--(NGAYTHANGNAM&);
NGAYTHANGNAM operator--(NGAYTHANGNAM&,int);
void thutrongtuan(NGAYTHANGNAM);
#endif
