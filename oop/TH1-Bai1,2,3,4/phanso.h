#pragma once
#ifndef _PHANSO
#define _PHANSO
#include <bits/stdc++.h>
using namespace std;
struct Phanso
{
    int tu,mau;
};
void Nhap(Phanso &);
void Nhap(Phanso *);
void Xuat(Phanso);
int TimUSCLN(int,int);
int BCNN(int , int );
void Rutgon(Phanso&);
void Rutgon(Phanso*);
Phanso TimMax(Phanso, Phanso);
void Tong(Phanso, Phanso);
void Hieu(Phanso, Phanso);
void Thuong(Phanso, Phanso);
void Tich(Phanso, Phanso);
void SapxepTangDan(Phanso[],int);
void SapxepGiamDan(Phanso[],int);
#endif
