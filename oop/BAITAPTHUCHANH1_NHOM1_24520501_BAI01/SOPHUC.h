#pragma once
#ifndef _SOPHUC
#define _SOPHUC
#include <bits/stdc++.h>
using namespace std;
struct SOPHUC
{
    double a,b;
};
void Khoitao(SOPHUC &);
void Nhap(SOPHUC &);
void Xuat(SOPHUC);
istream&operator>>(istream&,SOPHUC &);
ostream&operator<<(ostream&,SOPHUC );
int dinhgtri(SOPHUC);
SOPHUC cong(SOPHUC,SOPHUC);
SOPHUC tru(SOPHUC,SOPHUC);
SOPHUC nhan(SOPHUC,SOPHUC);
SOPHUC chia(SOPHUC,SOPHUC);
SOPHUC operator +(SOPHUC,SOPHUC);
SOPHUC operator -(SOPHUC,SOPHUC);
SOPHUC operator *(SOPHUC,SOPHUC);
SOPHUC operator /(SOPHUC,SOPHUC);
bool operator>(SOPHUC,SOPHUC);
bool operator>=(SOPHUC,SOPHUC);
bool operator<(SOPHUC,SOPHUC);
bool operator<=(SOPHUC,SOPHUC);
bool operator==(SOPHUC,SOPHUC);
bool operator!=(SOPHUC,SOPHUC);

#endif
