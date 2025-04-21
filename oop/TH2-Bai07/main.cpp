#include"xe.h"

int main()
{
    Vehicle xe1("Nguyen Duy Hieu", "AB", 50, 175);
    xe1.Xuat();
    cout<<"Thue: " << xe1.Thue()<<endl;
    Vehicle xe2("Vu Minh Hieu", "Z1000", 400, 250);
    xe2.Xuat();
    cout<<"Thue: " << xe2.Thue()<<endl;
    Vehicle xe3;
    xe3.Nhap();
    xe3.Xuat();
    cout<<"Thue: "<< xe3.Thue()<<endl;

}
