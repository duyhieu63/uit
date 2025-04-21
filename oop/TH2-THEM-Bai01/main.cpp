#include "DIEM.h"

using namespace std;

int main()
{
    DIEM d1,d2,d3;
    int chon;
    do
    {
    cout << "----------CHUONG TRINH XU LY DIEM----------" << endl;
    cout << "0: THOAT." << endl;
    cout << "1: Nhap toa do 3 diem." << endl;
    cout << "2: Xuat toa do 3 diem." << endl;
    cout << "3: Di chuyen 1 diem." << endl;
    cout << "4: Kiem tra cac diem trung nhau." << endl;
        cout << "5: Tinh khoang cach 2 diem." << endl;
    cout << "6: Tim diem doi xung cua 1 diem." << endl;
    cout << "7: Tinh chu vi tam giac." << endl;
    cout << "8: Tinh dien tich tam giac." << endl;
    cout << "9: Phan loai tam giac." << endl;
    cout << "0: Thoat CT." << endl;
    cout <<"Ban chon: ";
    cin >> chon;
        switch(chon)
    {
    case 0:
        cout <<"Dang thoat CT..." << endl;
        break;
    case 1:
        cout <<"Nhap toa do diem d1: "<<endl;
        d1.Nhap();
                cout <<"Nhap toa do diem d2: "<<endl;
        d2.Nhap();
                cout <<"Nhap toa do diem d3: "<<endl;
        d3.Nhap();
        break;
    case 2:
        cout << "d1(";d1.Xuat();cout << ")" << endl;
                cout << "d2(";d2.Xuat();cout << ")" << endl;
                        cout << "d3(";d3.Xuat();cout << ")" << endl;
                        break;
    case 3:
        int diemchon;
        double dx,dy;
        do
        {
            cout <<"Chon diem can di chuyen(1-d1,2-d2,3-d3): " << endl;
            cin >> diemchon;
        }while(diemchon<1||diemchon>3);
        cout << "Nhap khoang cach can di chuyen: " << endl;
        cin >> dx >> dy;
        if(diemchon==1)
        {
            d1.DiChuyen(dx,dy);
        }
        else if(diemchon==2)
        {
            d2.DiChuyen(dx,dy);
        }
        else
        {
            d3.DiChuyen(dx,dy);
        }
        cout << "Da di chuyen diem" << endl;
        break;
    case 4:
        if(d1.KiemtraTrung(d2))
            if(d1.KiemtraTrung(d3))
                cout << "3 diem d1,d2,d3 trung nhau" << endl;
                else
                    cout << "d1 trung d2" << endl;
                else if(d1.KiemtraTrung(d3))
                    cout << "d1 trung d3" << endl;
                else if(d2.KiemtraTrung(d3))
                    cout << "d2 trung d3" << endl;
                else
                    cout << "3 diem d1, d2, d3 khong trung nhau" << endl;
                break;
    case 5:
        cout << "Khoang cach tu d1 sang d2: " << d1.TinhKhoangCach(d2) << endl;
                cout << "Khoang cach tu d2 sang d3: " << d2.TinhKhoangCach(d3) << endl;
                        cout << "Khoang cach tu d1 sang d3: " << d1.TinhKhoangCach(d3) << endl;
                        break;
    case 6:
       {
           DIEM ddx;
        int diemchon1;
        do
        {
            cout <<"Chon diem can doi xung(1-d1,2-d2,3-d3): " << endl;
            cin >> diemchon1;
        }while(diemchon1<1||diemchon1>3);
        if(diemchon1==1)
        {
            ddx=d1.TimDoiXung();
            cout <<"d1(";ddx.Xuat();cout <<")"<< endl;
        }
        else if(diemchon1==2)
        {
            ddx=d2.TimDoiXung();
            cout <<"d2(";ddx.Xuat();cout <<")"<< endl;
        }
        else
        {
            ddx=d3.TimDoiXung();
            cout <<"d3(";ddx.Xuat();cout <<")"<< endl;
        }
        break;
       }
    case 7:
        if(d1.KiemTraTamGiacHopLe(d2,d3))
        {
            cout <<"Chu vi tam giac la : " << d1.TinhChuviTamGiac(d2,d3) << endl;
        }
        else
            cout << "3 diem 0 tao thanh tam giac" << endl;
        break;
    case 8:
        if(d1.KiemTraTamGiacHopLe(d2,d3))
        {
            cout << "Dien tich tam giac la : " << d1.TinhDienTichTamGiac(d2,d3) << endl;
        }
        else
            cout <<"3 diem 0 tao thanh tam giac" << endl;
        break;
    case 9:
        if(d1.KiemTraTamGiacHopLe(d2,d3))
        {
            cout << "TG qua 3 diem la : " << d1.PhanLoaiTamGiac(d2,d3) << endl;
        }
        else
            cout <<"3 diem 0 tao thanh tam giac" << endl;
        break;
    default:
        cout << "Ban da chon sai. Moi chon lai" << endl;
        break;
    }
}while(chon!=0);
}

