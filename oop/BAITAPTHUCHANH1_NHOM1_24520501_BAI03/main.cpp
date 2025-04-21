#include "NGAYTHANGNAM.h"

int main()
{
    NGAYTHANGNAM ntn;
     int chon;
    Khoitao(ntn);
    do
    {
        cout << "----------MENU XU LY NGAY THANG NAM----------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1.Nhap ngay thang nam, kiem tra tinh hop la va xuat ra ngay ke tiep" << endl;
        cout << "2.Tinh toan ngay thang nam nhap vao" << endl;
        cout << "3.Nhap vao ngay thang nam, xuat ra thu cua ngay do trong nam do" << endl;
        cin >> chon;
        switch(chon)
        {
        case 1:
            Nhap(ntn);
            if(checkhople(ntn)==1)
            {
            Xuat(ngaytieptheo(ntn));
            }
            break;
        case 2:
            {
                cout << "Nhap thoi gian : " << endl;
            Nhap(ntn);
            if(checkhople(ntn)==1)
            {
            cout << "Nhap phep toan can tinh : "  << endl;
            cout << "1.++" << endl;
            cout << "2.--" << endl;
            cout << "Nhap : ";
            int pt;
            cin >> pt;
            if(pt==1)
            {
                Xuat(ntn++);
            }
            else
            {
                Xuat(ntn--);
            }
            }
            break;
            }
        case 3:
            Nhap(ntn);
            if(checkhople(ntn)==1)
            {
            cout << "Ngay hom do roi vao ";
            thutrongtuan(ntn);
            }
            break;
             case 0:
            cout << "THOAT!";
            break;
        }
    }while(chon!=0);
    return 0;
}
