#ifndef _tamgiac
#define _tamgiac
#include<bits/stdc++.h>
using namespace std;

class tamgiac
{
private:
    int x,y,z;
public:
    ~tamgiac();
    tamgiac();
    void Nhap();
    void Xuat();
    bool Hople();
    string phanloai();
    float dientich();
    float chuvi();
    friend istream&operator>>(istream&,tamgiac &);
friend ostream&operator<<(ostream&,tamgiac );
};
#endif
tamgiac::~tamgiac()
{
//    cout << "Da huy 1 tam giac" << endl;
}
tamgiac::tamgiac()
{
    x=y=z=1;
}
void tamgiac::Nhap()
{
    cout << "Nhap do dai 3 canh cua tam giac :";
    cin >> x >> y >> z;
}
bool tamgiac::Hople()
{
    if( z<x+y && x<z+y && y<x+z )
    {
        return 1;
    }
    return 0;
}
float tamgiac::chuvi() {
	return x + y + z;
}
float tamgiac::dientich() {
	float p = chuvi() / 2.0;
	return sqrt(p*(p - x)*(p - y)*(p - z));
}
string tamgiac::phanloai()
{
    if( x*x==y*y+z*z || y*y==x*x+z*z || z*z== x*x+y*y)
			return "vuong";
		else if(x==y && y==z)
			return "deu";
		else if(x==y || x==z || y==z)
			return "can";
		else if(x*x > y*y+z*z || y*y > x*x+z*z || z*z > x*x+y*y)
			return "tu";
		else
			return "nhon";
}
void tamgiac::Xuat()
{
    cout << "Do dai 3 canh cua tam giac la : " << x << "," << y << "," << z << endl;
}
istream&operator>>(istream&is,tamgiac &tg)
{
    tg.Nhap();
    return is;
}
ostream&operator<<(ostream&os,tamgiac tg)
{
        tg.Xuat();
    return os;
}
