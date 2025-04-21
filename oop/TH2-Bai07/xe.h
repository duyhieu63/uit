#ifndef _Vehicle
#define _Vehicles
#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    private:
        string ChuXe;
        string LoaiXe;
        int TriGia;
        int DungTich;
    public:
        Vehicle(string c = "", string l = "", int tg=0, int dt=0);
        void Nhap();
        void Xuat();
        float Thue();
};
#endif
Vehicle :: Vehicle(string c, string l, int tg, int dt)
{
    ChuXe = c;
    LoaiXe = l;
    if(tg < 0)
    {
        TriGia=0;
    }
    else
    {
        TriGia = tg;
    }
    if(dt < 0)
    {
        DungTich = 0;
    }
    else
    {
        DungTich = dt;
    }
}

float Vehicle :: Thue()
{
    if(DungTich < 100)
    {
        return 0.01*TriGia;
    }
    else if(DungTich >= 100 && DungTich < 200)
    {
        return 0.03*TriGia;
    }
    else
    {
        return 0.05*TriGia;
    }
}

void Vehicle :: Nhap()
{
    getline(cin, ChuXe);
    getline(cin, LoaiXe);
    do
    {
        cin>>TriGia;
    }while(TriGia < 0);
    do
    {
        cin>>DungTich;
    }while(DungTich < 0);
}

void Vehicle :: Xuat()
{
    cout<<ChuXe<<endl<<LoaiXe<<endl<<TriGia<<endl<<DungTich<<endl;
}

