/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct Node{
    int value;
    Node* pNext;
};
struct List{
    Node* pHead;
    Node* pTail;
    int n;
};
void Init(List &L)
{
    L.pHead=NULL;
    L.pTail=NULL;
}
Node* creatNode(int x){
    Node* p= new Node;
    p->value=x;
    p->pNext=NULL;
    return p;
}
void AddLast(List &L, Node*p){
    if(L.pTail!=NULL){
        L.pTail->pNext= p;
        L.pTail=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
}
void inputList(List &L,int n)
{
    for(int i=0;i<n;i++)
    {
        int value;
        cin >> value;
        Node*p=creatNode(value);
        AddLast(L,p);
    }
}
void outputList(List L){
    Node* p= L.pHead;
    if(p==NULL)
    {
        cout << "List is empty";
    }
    while(p!= NULL){
        cout<< p->value<< " ";
        p=p->pNext;
    }
}
void outputGreaterThan(List L,int m)
{
    Node *p=L.pHead;
    if(p==NULL)
    {
        cout << "List is empty";
        return;
    }
    bool ans=false;
    while(p!=NULL)
    {
        if(p->value>=m)
        {
            cout << p->value << " ";
            ans=true;
        }
        p=p->pNext;
    }
    if(ans==false)
        {
            cout << "None";
        }
}
int main()
{
    List L; // Khai bao 1 danh sach
    Init(L); // Khoi tao danh sach
    int n; cout<<"Enter a number: "; cin>>n; // Nhap so luong phan tu cua ds
    cout<<"\nEnter a sequence of "<<n<<" numbers: ";
    inputList(L,n); // Nhap 1 day gom n so va luu vao ds. Phan tu moi duoc them vao cuoi ds
    cout<<"\nThe created Linked List: ";
    outputList(L); // Xuat ds. Neu ds rong thi xuat thong bao "List is empty"


    cout<<"\nEnter a number: "; int m; cin>>m;
    cout<<"\nValues greater than "<<m<<": ";
    outputGreaterThan(L,m);
    /*Xuat tat ca cac gia tri duoc luu trong ds lon hon m.
     Neu ds rong thi xuat thong bao "List is empty".
     Neu ds khong rong nhung khong co gia tri thoa yeu cau thi xuat "None"*/

    return 0;
}
