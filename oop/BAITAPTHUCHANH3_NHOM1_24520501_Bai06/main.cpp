#include <bits/stdc++.h>
#include "Thisinh.h"

int main(){
    cCandidate a,b,c;
    cListCandidate v;
    int choice;
    do{
        cout << "--------------------------Danh sach quan ly thi sinh------------------------\n";
        cout << "\n0. Thoat chuong trinh";
        cout << "\n1. Nhap danh sach sinh vien";
        cout << "\n2. Xuat thong tin cac thi sinh co tong diem lon hon 15";
        cout << "\n3. Xuat ra thong tin thi sinh co diem cao nhat";
        cout << "\n4. Xuat ra danh sach thi sinh theo diem giam dan";
        cout << "\nHay chon lua chon cua ban: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "\nDa thoat chuong trinh. See you next time";
            break;
        case 1:
            cout << "\nHay nhap so luong sinh vien: ";
            cin >> v;
            break;
        case 2:
            cout << "\nCac thi sinh tong diem lon hon 15: ";
            v.xuatDiem15();
            break;
        case 3:
            cout << "\nThi sinh co diem cao nhat: ";
            v.maxDiem();
            break;
        case 4:
            cout << "\nThi sinh theo diem giam dan: ";
            v.SortDecrease();
            break;
        default:
            break;
        }
    }while(choice!=0);
    return 0;
}