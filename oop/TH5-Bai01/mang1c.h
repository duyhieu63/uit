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
    bool KiemTraSCP(int) const;
    bool KiemTraSHT(int) const;
    bool KiemTraSDX(int) const;
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
    void LietkeSNT()  const ;
    int DemSCP() const;
    int TinhTongSHT() const;
    double TinhTBCongSDX() const;
    bool KiemTraMangLe() const;
    void TimChanBeNHat() const;
    void SapxepMangTang() const;
    void XoaTaiVT(int);
    void ThemTaiVT(int ,int) ;
    void CapNhatGiaTriTaiVT(int,int);
    vector<int>TimKiemTuyenTinh(int) const;
    int bosungchoTimKiemNhiPhan1(int) const;
        int bosungchoTimKiemNhiPhan2(int) const;
    vector<int>TimKIemNhiPhan(int) const;
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
bool mang1c::KiemTraSCP(int n) const
{
    if(n<1)
        return false;
    if(sqrt(n)==(int)sqrt(n))
        return true;
    else
        return false;
}
bool mang1c::KiemTraSHT(int n) const
{
    if(n<6)
        return false;
        int check;
    int tongus=0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
        tongus+=i;
    check=tongus==n?true:false;
    return check;
}
bool mang1c::KiemTraSDX(int n) const
{
    if(n<1)
        return false;
        vector<int> check;
        while(n>0)
        {
            check.push_back(n%10);
            n/=10;
        }
        int l=0;
        int r=check.size()-1;
        while(l<=r)
        {
            if(check[l]!=check[r])
                return false;
                l++;
                r--;
        }
        return true;
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
void mang1c::LietkeSNT() const
{
    int sl=0;
    for(int i=0;i<n;i++)
    {
        if(KiemTraSNT(a[i]))
        {
            cout << a[i] << " ";
            sl++;
        }
    }
    cout << endl;
    if(sl==0)
    {
        cout << "Mang khong co so SNT" << endl;
    }
}
int mang1c::DemSCP() const
{
    int sl=0;
     for(int i=0;i<n;i++)
    {
        if(KiemTraSCP(a[i]))
        {
            sl++;
        }
    }
    return sl;
}
int mang1c::TinhTongSHT() const
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        if(KiemTraSHT(a[i]))
            tong+=a[i];
    }
    return tong;
}
double mang1c::TinhTBCongSDX()const
{
    int tong=0;
    int sl=0;
    for(int i=0;i<n;i++)
    {
        if(KiemTraSHT(a[i]))
            {
                tong+=a[i];
                sl++;
            }
    }
    if(sl==0)
        return 0;
    return tong/sl;
}
bool mang1c::KiemTraMangLe() const
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2)
            return false;
    }
    return true;
}
void mang1c::TimChanBeNHat() const
{
    int vt=-1;
    int gt=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<gt && a[i]%2==0)
        {
            vt=i;
            gt=a[i];
        }
    }
    if(vt==-1)
    {
        cout << "Mang khong co ptu chan" << endl;
    }
    else
    {
        cout << "Phan tu chan nho nhat o vi tri a[" << vt << "] = " << gt << endl;
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
void mang1c::XoaTaiVT(int vt)
{
    mang1c moi(n-1);
    for(int i=0;i<n;i++)
    {
        if(i==vt)
            continue;
        moi.a[i]=a[i];
    }
    this->~mang1c();
    *this=moi;
    moi.~mang1c();
}
void mang1c::ThemTaiVT(int vt,int gt)
{
    mang1c moi(n+1);
    for(int i=0;i<vt;i++)
    {
        moi.a[i]=a[i];
    }
    moi.a[vt]=gt;
    for(int i=vt+1;i<=n;i++)
    {
        moi.a[i]=a[i-1];
    }
     this->~mang1c();
    *this=moi;
    moi.~mang1c();
}
void mang1c::CapNhatGiaTriTaiVT(int vt,int gt)
{
    a[vt]=gt;
}
vector<int> mang1c::TimKiemTuyenTinh(int gt)  const
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]==gt)
            ans.push_back(i);
    }
    return ans;
}
int mang1c::bosungchoTimKiemNhiPhan1(int gt) const
{
    int l=0;
    int r=n-1;
    int vt;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==gt)
        {
            r=mid-1;
            vt=mid;
        }
        else if(a[mid]>gt)
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return vt;
}
int mang1c::bosungchoTimKiemNhiPhan2(int gt) const
{
    int l=0;
    int r=n-1;
    int vt;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==gt)
        {
            l=mid+1;
            vt=mid;
        }
        else if(a[mid]>gt)
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return vt;
}
vector<int> mang1c::TimKIemNhiPhan(int gt) const
{
    vector<int> ans;
    int vt1=bosungchoTimKiemNhiPhan1(gt);
    int vt2=bosungchoTimKiemNhiPhan2(gt);
    if(vt1==vt2)
      {
           ans.push_back(vt1);
        return ans;
      }
      ans.push_back(vt1);
      ans.push_back(vt2);
      return ans;
}




