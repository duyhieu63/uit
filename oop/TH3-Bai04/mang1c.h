#pragma once
#ifndef _mang1c
#define _mang1c
#include<bits/stdc++.h>
using namespace std;
class mang1c
{
private:
    int n;
    int *a;
    bool KiemTraSNT(int) const;
public:
    ~mang1c();
    mang1c();
    mang1c(int);
    mang1c(int,int);
    mang1c(const mang1c&);
    mang1c&operator=(const mang1c&);
    int GetN() const;
    int *GetA() const;
    void SetN(int);
    void SetA(const mang1c&);
    void Nhap();
    void Xuat() const;
    friend istream&operator>>(istream&,mang1c&);
    friend ostream&operator<<(ostream&,const mang1c&);
    void PhatSinh();
    void TimSNTLonnhat()  const ;
    bool KiemTraMangTangDan() const;
    int DemSoLanXuatHienCuaX(int) const;
    void TimLeBeNhat() const;
    void SapxepMangTang() const;
    void SapxepMangGiam() const;

};
#endif // _mang1c
mang1c::~mang1c()
{
    if(a!=NULL)
    {
        delete[]a;
        a=NULL;
        n=0;
    }
}
mang1c::mang1c()
{
    a=NULL;
    n=0;
}
mang1c::mang1c(int n)
{
      if(n==0)
    {
        this->n=0;
        a=NULL;
    }
    else
    {
        a=new int[n];
    this->n=n;
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
    }
}
mang1c::mang1c(int n,int m)
{  if(n==0)
    {
        this->n=0;
        a=NULL;
    }
    else
    {
        a=new int[n];
    this->n=n;
    for(int i=0;i<n;i++)
    {
        a[i]=m;
    }
    }
}
mang1c::mang1c(const mang1c&m)
{
    if(m.n==0)
    {
        this->n=0;
        a=NULL;
    }
    else
    {
        this->n=m.n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=m.a[i];
    }
    }
}
mang1c& mang1c::operator=(const mang1c&m)
{
    if(m.n==0)
    {
        this->n=0;
        a=NULL;
    }
    else
    {
        this->n=m.n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=m.a[i];
    }
    }
    return *this;
}
int mang1c::GetN() const
{
    return n;
}
int*mang1c::GetA()const
{
    return a;
}
void mang1c::SetN(int n)
{
    if(n==0)
        this->~mang1c();
    else
    {
        mang1c m(n);
        int min_len=min(n,this->n);
        for(int i=0;i<min_len;i++)
        {
            m.a[i]=a[i];
        }
        for(int i=min_len;i<n;i++)
        {
            m.a[i]=0;
        }
        this->~mang1c();
        *this=m;
    }
}
void mang1c::SetA(const mang1c&m)
{
    *this=m;
}
void mang1c::Nhap()
{
    if(a!=NULL)
        this->~mang1c();
    do
    {
        cout << "Nhap so phan tu cua mang khong am : ";
        cin >> n;
    }while(n<0);
    mang1c create(n);
    *this=create;
    for(int i=0;i<n;i++)
    {
        cout << "a[" << i<<"] = ";
        cin >> a[i];
    }
}
void mang1c::Xuat() const
{
    if(a==NULL)
    {
        cout << "Mang rong\n";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
istream&operator>>(istream&is,mang1c&m)
{
    m.Nhap();
    return is;
}
ostream&operator<<(ostream&os,const mang1c &m)
{
    m.Xuat();
    return os;
}
bool mang1c::KiemTraSNT(int n) const
{
    bool snt=true;
    if(n<2)
        return true;
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}
void mang1c::PhatSinh()
{
    if(a!=NULL)
    {
        this->~mang1c();
    }
    else
    {
        do
        {
            cout << "Nhap so phan tu mang khong am : ";
        cin >> n;
        }while(n<0);
        if(n==0)
            a=NULL;
        else
        {
            a=new int[n];
            int mi,ma;
            cout << "Nhap mien gia tri phat sinh : ";
            cin >> mi >> ma;
            srand(time(0));
            for(int i=0;i<n;i++)
            {
                a[i]=mi+rand()%(ma-mi+1);
            }
        }
    }
}
void mang1c::TimSNTLonnhat() const
{
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(KiemTraSNT(a[i]))
        {
            ans=max(ans,a[i]);
        }
    }
    if(ans==-1)
    {
        cout << "Khong co SNT " << endl;
    }
    else
    {
        cout << "SNT lon nhat la : " << ans << endl;
    }
}
void mang1c::TimLeBeNhat() const
{
    int vt=-1;
    int gt=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<gt && a[i]%2)
        {
            vt=i;
            gt=a[i];
        }
    }
    if(vt==-1)
    {
        cout << "Mang khong co ptu le" << endl;
    }
    else
    {
        cout << "Phan tu le nho nhat o vi tri a[" << vt << "] = " << gt << endl;
    }
}
void mang1c::SapxepMangTang() const
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
                swap(a[j],a[i]);
        }
    }
}
void mang1c::SapxepMangGiam() const
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
                swap(a[j],a[i]);
        }
    }
}
 bool mang1c::KiemTraMangTangDan() const
 {
         for(int i=1;i<n;i++)
         {
             if(a[i]<a[i-1])
                return false;
         }
         return true;
 }
    int mang1c::DemSoLanXuatHienCuaX(int x) const
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                ans++;
        }
        return ans;
    }





