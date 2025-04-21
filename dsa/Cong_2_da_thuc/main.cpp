/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
[
]
define
include
###End banned keyword*/
#include<iostream>
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
void Nhap(DATHUC &L)
{
    L.head=L.tail=NULL;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        double heso;
        cin >> heso;
        int somu;
        cin >> somu;
        AddLast(L,creatNode(heso,somu));
    }
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
DATHUC Tong2DaThuc(DATHUC A,DATHUC B)
{
    DATHUC kq;
    kq.head=NULL;
    kq.tail=NULL;
    Node*first=A.head;
    Node*second=B.head;
    while(first&&second)
    {
        if(first->data->somu>second->data->somu)
        {
            AddLast(kq,creatNode(first->data->heso,first->data->somu));
            first=first->next;
        }
        else if(first->data->somu<second->data->somu)
        {
             AddLast(kq,creatNode(second->data->heso,second->data->somu));
             second=second->next;
        }
        else
        {
             AddLast(kq,creatNode((second->data->heso+first->data->heso),second->data->somu));
             first=first->next;
             second=second->next;
        }
    }
    while(first)
    {
         AddLast(kq,creatNode(first->data->heso,first->data->somu));
            first=first->next;
    }
    while(second)
    {
        AddLast(kq,creatNode(second->data->heso,second->data->somu));
             second=second->next;
    }
    return kq;
}
int main() {
    DATHUC A, B;
    Nhap(A);
    Nhap(B);
    cout << "Da thuc A: "; Xuat(A);
    cout << "\nDa thuc B: "; Xuat(B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}
