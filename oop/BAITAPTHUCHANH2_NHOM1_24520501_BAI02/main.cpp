#include<bits/stdc++.h>
#include"PTbac1.h"

using namespace std;
int main(){
    int choice;
    ptBac1 A;
    do{

        cout << "----------Chuong trinh pt bac 1-------------------" << endl;
     cout << "0. Thoat chuong trinh\n";
     cout << "1. Thiet lap a,b deu bang 0.\n";
     cout << "2. Thiet lap a=0, b tuy y.\n";
     cout << "3. Thiet lap 2 he so a,b tuy y.\n";
     cout << "4. Nhap 2 he so a,b.\n";
     cout << "5. Giai pt.\n";
     cout << "6. Xuat pt.\n";
     cout << "Chon:  " ;

     cin >> choice;
     cin.ignore();
     switch (choice)
     {
     case 1:
        A.khoiTao();
        break;
     case 2:
        A.khoiTao_heSoB();
        break;
     case 3:
        cout << "Nhap 2 so : \n";
        int a, b;
        cin >> a >> b;
        A.khoiTao2heSo(a,b);
        break;
    case 4:
        cin >> A;
        break;
    case 5:
        A.giaiPT();
        break;
    case 6:
        cout << A;
        A.giaiPT();
        break;
    default:
        break;
     }
    }while(choice!= 0);
}
