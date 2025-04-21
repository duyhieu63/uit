#ifndef _Diem
#define _Diem
#include<bits/stdc++.h>
using namespace std;
class Diem
{
    private:
        float x, y;
    public:
        Diem(float x1=0, float x2=0)
        {
            x=x1;
            y=x2;
        }
        void Nhap();
        void Xuat();
        void TinhTien(float , float );
        float getx() {return x;};
        float gety() {return y;};
        void setx(int a=0)
        {
            x=a;
        }
        void Quay(float);
        void PhongTo(float );
        void ThuNho(float , float );
};

void Diem :: Nhap()
{
    cin>>x>>y;
}

void Diem  :: Xuat()
{
    cout<<x<<" "<<y<<endl;
}

void Diem :: TinhTien(float a, float b)
{
    x += a;
    y += b;
}

void Diem :: Quay(float degree)
{
    float temp = x;
    x = x*cos(degree/180.0) - y*sin(degree/180.0);
    y = temp*sin(degree/180.0) + y*cos(degree/180.0);
}

void Diem :: PhongTo(float a)
{
    x *= a;
    y *= a;
}

void Diem :: ThuNho(float a, float b)
{
    x /= a;
    y /= b;
}


#endif
