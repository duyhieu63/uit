#pragma once
#ifndef _DaGiac
#define _DaGiac
#include "Diem.h"

class DaGiac
{
    private:
        int soDiem;
        Diem* sDiem;
    public:
        void NhapDaGiac()
        {
            cin>>soDiem;
            sDiem = new Diem[soDiem];
            for(int i=0;i<soDiem;i++)
            {
                sDiem[i].Nhap();
            }
        }
        void TinhTienDaGiac(float a, float b)
        {
           for(int i=0;i<soDiem;i++)
           {
               sDiem[i].TinhTien(a, b);
           }
        }
        void PhongToDaGiac(float a)
        {
            for(int i=0;i<soDiem;i++)
            {
                sDiem[i].PhongTo(a);
            }
        }
        void ThuNhoDaGiac(float a, float b)
        {
            for(int i=0;i<soDiem;i++)
            {
                sDiem[i].ThuNho(a,b);
            }
        }
        void QuayDaGiac(float degree)
        {
            for(int i=0;i<soDiem;i++)
            {
                sDiem[i].Quay(degree);
            }
        }
        void XuatDaGiac()
        {
            for(int i=0;i<soDiem;i++)
            {
                cout<<sDiem[i].getx()<<" "<<sDiem[i].gety()<<endl;
            }
        }
        ~DaGiac()
        {
            if(sDiem != NULL)
            {
                delete[]sDiem;
            }
        }
};
#endif // DAGIAC_H_INCLUDED
