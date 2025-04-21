#include "mang1c.h"

int main()
{
    mang1c m1c;
    int chon;
    do
    {
        cout << "------CHUONG TRINH XU LY MANG 1 CHIEU------\n";
        cout << "1. Nhap mang\n";
        cout << "2. Phat sinh mang\n";
        cout << "3. Xuat mang\n";
        cout << "4. Cap nhat so phan tu mang goi ham SetN(n)\n";
        cout << "5. SNT lon nhat \n";
        cout << "6. Kiem tra mang tang dan\n";
        cout << "7.Dem so lan xuat hien cua 1 so\n";
        cout << "8.Tim so le be nhat\n";
        cout << "9.Sap xep mang tang dan\n";
        cout << "10.Sap xep mang giam dan\n";
        cout << "0. Thoat CT\n";
        cout << "--------------------------------------------\n";
        cout << "Ban chon: ";
        cin >> chon;
        switch (chon)
        {
            case 0:
                cout << "Dang thoat CT\n";
                break;
            case 1:
                cin >> m1c;
                break;
            case 2:
                m1c.PhatSinh();
                break;
            case 3:
                cout << m1c;
                break;
                        case 4:
        {
            int n_moi;
            cout << "Nhap so phan tu can cap nhat: ";
            cin >> n_moi;
            m1c.SetN(n_moi);
            cout << "Mang sau khi cap nhat so phan tu la: " << m1c;
            break;
        }
                        case 5:
        {
            m1c.TimSNTLonnhat();
            break;
        }
                        case 6:
                            {
                                if(m1c.KiemTraMangTangDan())
                                {
                                    cout << "Mang hien tai la 1 mang tang dan!" <<endl;
                                }
                                else
                                {
                                    cout << "Khong phai mang tang dan!" << endl;
                                }
                                break;
                            }
                        case 7:
                            {
                                int x;
                                cout << "Nhap so can dem so lan xuat hien trong mang : ";
                                cin >> x;
                                if(m1c.DemSoLanXuatHienCuaX(x)==0)
                                {
                                    cout << "Khong co ton tai gia tri " << x <<" trong mang" << endl;
                                }
                                else
                                {
                                    cout << "So " << x << " xuat hien " << m1c.DemSoLanXuatHienCuaX(x) << " lan" << endl;
                                    break;
                                }
                            }
                        case 8:
                            {
                                m1c.TimLeBeNhat();
                                break;
                            }
                        case 9:
                            {
                                cout << "Mang truoc khi sap xep la : ";
                                cout << m1c;
                                m1c.SapxepMangTang();
                                cout << "\nMang sau khi sap xep la : ";
                                cout << m1c;
                                break;
                            }
                        case 10:
                                {
                                cout << "Mang truoc khi sap xep la : ";
                                cout << m1c;
                                m1c.SapxepMangGiam();
                                cout << "\nMang sau khi sap xep la : ";
                                cout << m1c;
                                break;
                            }
                        break;
                        default:
                        cout << "Ban chon sai.Chon lai!" << endl;
                        break;

        }
        }while(chon!=0);

}
