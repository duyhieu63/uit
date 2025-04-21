#pragma once
#ifndef _ptBac1
#define _ptBac1
#include<bits/stdc++.h>
using namespace std;

class ptBac1{
    private:
        double a,b;
    public:

        void khoiTao();
        void khoiTao_heSoB();
        void khoiTao2heSo(int a, int b);
        void giaiPT();
        friend istream& operator >> (istream& in, ptBac1 &L);
        friend ostream& operator << (ostream& out, ptBac1 A);
};

void ptBac1::khoiTao(){
    this->a= 0;
    this->b= 0;
    cout << "Phuong trinh khoi tao: ";
    cout << (int)a <<"x" <<  " + " << (int)b << "= 0" ;
    cout << endl;
}

void ptBac1::khoiTao_heSoB(){
    int b;
    cout << "Nhap he so b: ";
    cin >> b;
    this-> a=0;
    this-> b=b;
    cout << (int)b << "= 0" << endl;
}

void ptBac1::khoiTao2heSo(int a, int b){
    this-> a= a;
    this-> b= b;
    if(b > 0) cout << (int)a <<"x" <<  " + " << (int)b << "= 0" ;
    else if(b < 0) cout << (int)a << "x" << (int)b << "= 0";
    else cout << (int)a << "x" << "= 0" ;
    cout << endl;
}

void ptBac1::giaiPT(){
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem." << endl;
        } else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    } else {
        double x = -b / a;
        cout << "PT co nghiem x = " << fixed << setprecision(2) << x << endl;
    }
}


istream& operator >> (istream &in, ptBac1 &L){
        cout << "-------------Hay nhap phuon trinh bac 1-------------\n";
        cout << "Luu y: Hay nhap he so a,b != 0\n";
        cout << "Nhap he so a: ";
        in >> L.a;
        cout << "\nNhap he so b: ";
        cin >> L.b;
    return in;
}

ostream& operator << (ostream& out, ptBac1 A){
    if(A.a > 0) out << (int)A.a <<"x" <<  " + " <<(int)A.b << "= 0" ;
    else if(A.b < 0) out << (int)A.a << "x" << (int)A.b << "= 0";
    else out << (int)A.a << "x" << "= 0" ;
    out << endl;
    return out;
}
#endif
