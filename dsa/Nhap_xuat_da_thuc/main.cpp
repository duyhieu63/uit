/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
[
]
define
include
###End banned keyword*/
#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;


struct DONTHUC{
	int somu;
	double heso;
};


struct Node{
	DONTHUC* data;
	Node* next;

};

typedef struct DATHUC{
	Node* head;
	Node* tail;
}List;

Node* creatNode(double heso,int somu){
    Node* p= new Node;
    p->data=new DONTHUC;
    p->data->heso=heso;
    p->data->somu=somu;
    p->next=NULL;
    return p;
}
void AddLast(DATHUC &L, Node*p){
    if(L.tail!=NULL){
        L.tail->next= p;
        L.tail=p;
    }
    else{
        L.head=p;
        L.tail=L.head;
    }
}
void Nhap(DATHUC &L,double heso,int somu)
{
    AddLast(L,creatNode(heso,somu));
}

void Xuat(DATHUC L){
    Node* p= L.head;
    bool flag=false;
    while(p != NULL){
        if(p->data->heso != 0) {
            if(flag) {
                if(p->data->heso > 0) cout << "+";
            }
            double h = p->data->heso;
            int sm = p->data->somu;

            if(h == 1) {
                if(sm == 0) cout << "1";
                else if(sm == 1) cout << "x";
                else cout << "x^" << sm;
            } else if(h == -1) {
                if(sm == 0) cout << "-1";
                else if(sm == 1) cout << "-x";
                else cout << "-x^" << sm;
            } else {
                if(sm == 0) cout << h;
                else if(sm == 1) cout << h << "x";
                else cout << h << "x^" << sm;
            }
            flag = true;
        }
        p=p->next;
    }
    if(!flag) cout << "0";
}

double TinhDaThuc(DATHUC B,double x){
    Node*p=B.head;
    double ans=0;
    while(p){
        ans+=(p->data->heso)*pow(x,p->data->somu);
        p=p->next;
    }
    return ans;
}
int main()
{
    DATHUC B;
    B.head=B.tail=NULL;
    int n; cin >> n;
    double heso; int somu;
    for (int i = 0; i < n; i++)
    {
		cin >> heso >> somu;
		Nhap(B,heso,somu);
    }
    cout << "Da thuc vua nhap la: "; Xuat(B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(B, x);
    return 0;
}
