#include "tamgiac.h"
using namespace std;

int main(){
	tamgiac a;
	cin>>a;
	cout<<a;
	while(a.KiemTraTGHopLe() == false){
		cout<<"tam giac khong hop le, nhap lai tam giac.";
		cin>>a;
	}
	int n;
	do{
	cout<<"\n===========Chuong Tring Tam Giac============\n";
	cout<<"0.Thoat chuong trinh.\n";
	cout<<"1.Tinh chu vi tam giac.\n";
	cout<<"2.Thay doi diem A.\n";
	cout<<"3.Thay doi diem B.\n";
	cout<<"4.Thay doi diem C.\n";
	cout<<"5.Di chuyen tam giac.\n";
	cout<<"6.Phan loai tam giac\n";
	cout<<"==============================================\n";
	cout<<"Moi ban chon: ";cin>>n;
	switch(n){
		case 0:{
			cout<<"Thoat chuong trinh.\n";
			break;
		}
		case 1:{
			cout<<"Chu vi tam giac la: "<<a.TinhChuVi() ;
			break;
		}
		case 2:{
			cout<<"Moi ban nhap diem muon thay doi: ";
			DIEM z;
			cin>>z;
			a.SetA(z);
			while(a.KiemTraTGHopLe() == false){
				cout<<"tam giac khong hop le, nhap lai diem A: ";
				cin>>z;
				a.SetA(z);
			}
			break;
		}
		case 3:{
			cout<<"Moi ban nhap diem muon thay doi: ";
			DIEM z2;
			cin>>z2;
			a.SetB(z2);
			while(a.KiemTraTGHopLe() == false){
				cout<<"tam giac khong hop le, nhap lai diem B:";
				cin>>z2;
				a.SetB(z2);
			}
			break;
		}
		case 4:{
			cout<<"Moi ban nhap diem muon thay doi: ";
			DIEM z3;
			cin>>z3;
			a.SetC(z3);
			while(a.KiemTraTGHopLe() == false){
				cout<<"tam giac khong hop le, nhap lai diem C: ";
				cin>>z3;
				a.SetC(z3);
			}
			break;
		}
		case 5:{
			a.dichuyentamgiac();
			cout<<"Sau khi di chuyen, tam giac co toa do la: ";
			cout<<a;
			break;
		}
		case 6:{
			cout<<a.PhanLoai();
			break;
		}
		}
	}while (n!=0);
	return 0;
}
