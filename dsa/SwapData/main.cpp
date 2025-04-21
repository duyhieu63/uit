
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct node{
    int info;
    node* pNext;
};

struct List{
    node* pHead = NULL;
    node* pTail= NULL;
};
node* creatnode(int x){
    node* p= new node;
    p->info=x;
    p->pNext=NULL;
    return p;
}
void Init(List &L)
{
    node* pHead = NULL;
    node* pTail= NULL;
}
void AddLast(List &L, node*p){
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
            int x;
        cin >> x;
        node*p=creatnode(x);
        AddLast(L,p);
    }
}
void outputList(List L){
    node* p= L.pHead;
    if(p==NULL)
    {
        cout << "List is empty";
        return;
    }
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
}
node*swapData(List &L,int x,int y)
{
    node* p= L.pHead;
    node *first,*second;
    first=NULL;
    second=NULL;
    if(p==NULL)
    {
        cout << "List is empty";
        return NULL ;
    }
    while(p!= NULL){
        if(p->info==x||p->info==y)
        {
            if(p->info==x && first==NULL)
            {
                first=p;
            }
            if(p->info==y && second==NULL)
            {
                second=p;
            }
        }
        p=p->pNext;
    }
    if(first==NULL || second==NULL)
        return NULL;
    swap(first->info,second->info);
    return first;
}
int main()
{
    List L;
    L.pHead=L.pTail=NULL;
    int n; cin>>n;
    inputList(L,n);
    cout<<"Created List: "<<endl;
    outputList(L); // Neu ds rong thi xuat "List is empty"
    cout<<endl;

    int x, y; cin>>x>>y;
    node *p = swapData(L,x,y);
    /* Tim 2 node chua x va y,
    Hoan vi gia tri cua 2 node do,
    nghia la: Lien ket giua cac node khong thay doi, node ban dau chua x se doi lai la chua y
    Ham return node chua x ban dau, luc chua hoan vi*/

    cout<<"Updated List after swapping "<<x<<" and "<<y<<": "<<endl;
    outputList(L);
    cout<<endl;

    /* Kiem tra xem co that su hoan vi info cua 2 node khong
    Neu hoan vi info thi node chua x ban dau se doi lai chua y*/

    if(p) // co hoan vi
    {
        cout<<"At the address of "<<x<< ": ";
        cout<<p->info;
    }
    else cout<<"Can not swap";
    return 0;
}
