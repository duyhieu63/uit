
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
void concate(List &L1,List &L2)
{
    if(L1.pHead==NULL &&L2.pHead==NULL)
    {
        return;
    }
    else if(L1.pHead==NULL &&L2.pHead!=NULL)
    {
        L1.pHead=L2.pHead;
        return;
    }
    else
    {
        return;
    }
    L1.pTail->pNext=L2.pHead;
}
int main()
{
    List L1, L2;
    Init(L1);Init(L2);

    int n; cin>>n;
    inputList(L1,n);
    cout<<"Created 1st List: "<<endl;
    outputList(L1);
    cout<<endl;

    cin>>n;
    inputList(L2,n);
    cout<<"Created 2nd List: "<<endl;
    outputList(L2);
    cout<<endl;

    concate(L1,L2); // Noi L2 vao L1
    cout<<"Updated L1: "<<endl;
    outputList(L1);

    return 0;
}
