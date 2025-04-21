#include "phanso.h"
void Nhap(Phanso &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.tu;
    do
    {
        cout << "Nhap mau so khac 0: ";
        cin >> ps.mau;
    }while(ps.mau==0);
}
void Nhap(Phanso *ps)
{
    cout << "Nhap tu so: ";
    cin >> ps->tu;
    do
    {
        cout << "Nhap mau so khac 0: ";
        cin >> ps->mau;
    }while(ps->mau==0);
}
void Xuat(Phanso ps)
{
    Rutgon(ps);
      if(ps.mau<0)
    {
        cout << -ps.tu << "/" << -ps.mau << endl;
    }
    else if(ps.mau==-1)
    {
        cout << -ps.tu << endl;
    }
    else if(ps.mau==0)
    {
        cout << "Khong xac dinh" << endl;
    }
    else if(ps.mau==1)
    {
        cout << ps.tu << endl;
    }
    else
        cout << ps.tu << "/" << ps.mau << endl;
}
int TimUSCLN(int a,int b)
{
    int ucln;
    if(a==0||b==0)
    {
        ucln=a+b;
    }
    else
    {
        while(a!=b)
        {
            if(a>b)
            {
                a-=b;
            }
            else
                b-=a;
        }
        ucln=a;
    }
    return ucln;
}
int BCNN(int a, int b)
{
    int result = TimUSCLN(a, b);
    return a * b / result;
}
void Rutgon(Phanso&ps)
{
    int ucln=TimUSCLN(ps.tu,ps.mau);
    if(ucln>0)
    {
        ps.tu/=ucln;
        ps.mau/=ucln;
    }
}
void Rutgon(Phanso*ps)
{
     int ucln=TimUSCLN(ps->tu,ps->mau);
    if(ucln>0)
    {
        ps->tu/=ucln;
        ps->mau/=ucln;
    }
}
Phanso TimMax(Phanso ps1, Phanso ps2)
{
    if(ps1.mau==ps2.mau)
    {
        if(ps1.tu==ps2.tu)
        {
            cout << "Hai phan so bang nhau : " << ps1.tu << "/" <<ps1.mau << endl;
        }
        else if(ps1.tu>ps2.tu)
        {
            cout << "Phan so lon nhat : " << ps1.tu << "/" <<ps1.mau << endl;
        }
        else
            cout << "Phan so lon nhat : " << ps2.tu << "/" <<ps2.mau << endl;
    }
    else
    {
        int msc=BCNN(ps1.mau,ps2.mau);
        ps1.tu*=(msc/ps1.mau);
        ps2.tu*=(msc/ps2.mau);
        ps2.mau=msc;
        ps1.mau=msc;
            if(ps1.tu==ps2.tu)
        {
            Rutgon(ps1);
            cout << "Hai phan so bang nhau : " << ps1.tu << "/" <<ps1.mau << endl;
        }
        else if(ps1.tu>ps2.tu)
        {
            Rutgon(ps1);
            cout << "Phan so lon nhat : " << ps1.tu << "/" <<ps1.mau << endl;
        }
        else
            {
                Rutgon(ps2);
                cout << "Phan so lon nhat : " << ps2.tu << "/" <<ps2.mau << endl;
            }
    }
}
void Tong(Phanso ps1, Phanso ps2)
{
        Phanso tong;
        int msc=BCNN(ps1.mau,ps2.mau);
        ps1.tu*=(msc/ps1.mau);
        ps2.tu*=(msc/ps2.mau);
        tong.tu=ps1.tu+ps2.tu;
        tong.mau=msc;
        cout << "Tong 2 phan so la : " ;
        Xuat(tong);
}
void Hieu(Phanso ps1, Phanso ps2)
{
        Phanso hieu;
        int msc=BCNN(ps1.mau,ps2.mau);
        ps1.tu*=(msc/ps1.mau);
        ps2.tu*=(msc/ps2.mau);
        hieu.tu=ps1.tu-ps2.tu;
        hieu.mau=msc;
        cout << "Hieu 2 phan so la (Phan so dau tru phan so sau) : ";
        Xuat(hieu);
}
void Tich(Phanso ps1,Phanso ps2)
{
    Phanso tich;
    tich.tu=ps1.tu*ps2.tu;
    tich.mau=ps1.mau*ps2.mau;
    cout << "Tich 2 phan so la : ";
    Xuat(tich);
}
void Thuong(Phanso ps1,Phanso ps2)
{
    Phanso thuong;
    thuong.tu=ps1.tu*ps2.mau;
    thuong.mau=ps1.mau*ps2.tu;
    cout << "Thuong 2 phan so la : ";
    Xuat(thuong);
}
int Sosanh(Phanso ps1,Phanso ps2)
{
     if(ps1.mau==ps2.mau)
    {
        if(ps1.tu==ps2.tu)
        {
            return 0;
        }
        else if(ps1.tu>ps2.tu)
        {
            return 1;
        }
        else
            return -1;
    }
    else
    {
        int msc=BCNN(ps1.mau,ps2.mau);
        ps1.tu*=(msc/ps1.mau);
        ps2.tu*=(msc/ps2.mau);
        ps2.mau=msc;
        ps1.mau=msc;
            if(ps1.tu==ps2.tu)
        {
            return 0;
        }
        else if(ps1.tu>ps2.tu)
        {
            return 1;
        }
        else
            {
                return -1;
            }
    }
}
void SapxepTangDan(Phanso ps[],int n)
{
    for(int i=0;i<n;i++)
    {
        Nhap(ps[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(Sosanh(ps[i],ps[j])==1)
            {
                swap(ps[i],ps[j]);
            }
        }
    }
}
void SapxepGiamDan(Phanso ps[],int n)
{
    for(int i=0;i<n;i++)
    {
        Nhap(ps[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(Sosanh(ps[i],ps[j])==-1)
            {
                swap(ps[i],ps[j]);
            }
        }
    }
}
