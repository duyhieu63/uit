#ifndef _THOIGIAN
#define _THOIGIAN
#include<bits/stdc++.h>
using namespace std;
struct THOIGIAN
{
    int gio,phut,giay;
};
void Khoitao(THOIGIAN &);
void Nhap(THOIGIAN &);
void Xuat(THOIGIAN);
istream&operator>>(istream&,THOIGIAN &);
ostream&operator<<(ostream&,THOIGIAN );
int quydoiragiay(THOIGIAN );
THOIGIAN operator +(THOIGIAN,THOIGIAN);
THOIGIAN operator -(THOIGIAN,THOIGIAN);
bool operator>(THOIGIAN,THOIGIAN);
bool operator>=(THOIGIAN,THOIGIAN);
bool operator<(THOIGIAN,THOIGIAN);
bool operator<=(THOIGIAN,THOIGIAN);
bool operator==(THOIGIAN,THOIGIAN);
bool operator!=(THOIGIAN,THOIGIAN);
#endif
