#include<bits/stdc++.h>
#include "matranVuong.h"

using namespace  std;

int main(){
    mtVuong v,a;
    int choice;
    do{
        cout << "--------------------------Danh sach quan ly thi sinh------------------------\n";
        cout << "\n0. Thoat chuong trinh";
        cout << "\n1. Nhap ma tran vuong";
        cout << "\n2. Sao chep ma tran vuong";
        cout << "\n3. Xuat ma tran vuong";
        cout << "\n4. Liet ke cac phan tu tren duong cheo chinh cua ma tran";
       cout << "\n5. Dem so luong cac phan tu co ky so cuoi la 3 nam tren duong cheo phu cua ma tran";
cout << "\n6. Tim phan tu chan dau tien o nua mang vuong phia duoi duong cheo phu cua ma tran";
cout << "\n7.Kiem tra xem co ton tai phan tu am o nua mang vuong phia tren duong cheo chinh hay khong?";
cout << "\n8.Sap xep tang dan cac so tren dg cheo phu";
        cout << "\nHay chon lua chon cua ban: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "\nDa thoat chuong trinh. See you next time\n";
            break;
        case 1:
            cin >> v;
            break;
        case 2:
            cout << "\nMa tran truoc khi sao chep: ";
            cout << a;
            cout << "\nMa tran sau khi sao chep";
            a=v;
            cout << endl <<a;
            break;
        case 3:
            cout << v ;
            cout << endl;
            break;
        case 4:
            v.oddTrenDuongCheoChinh();
            break;
        case 5:
            cout << "So luong  cac phan tu co ky so cuoi la 3 nam tren duong cheo phu cua ma tran la : " << v.countEnding3() << endl;
            break;
        case 6:
            {
                int ans=v.firstEven();
            if(ans==-1)
            {
                cout << "Khong co phan tu chan dau tien o nua mang vuong phia duoi duong cheo phu cua ma tran! "<< endl;
            }
            else
            cout << "Phan tu chan dau tien o nua mang vuong phia duoi duong cheo phu cua ma tran la : " << v.firstEven() << endl;
            break;
            }
        case 7:
            {
                int ans=v.isNegative_MangTren();
                if(ans)
                {
                    cout << "Ton tai phan tu am o nua mang vuong phia tren duong cheo chinh " << endl;
                }
                else
                {
                     cout << "Khong ton tai phan tu am o nua mang vuong phia tren duong cheo chinh " << endl;
                }
                break;
            }
        case 8:
            {
                cout << "Mang truoc khi sap xep : " << endl;
                cout << v;
                cout << "Mang sau khi sap xep" << endl;
                v.sapxepgiamdantrendgcheophu();
                cout << v;
            }
        default:
            break;
        }
    }while(choice!=0);
    return 0;
}
