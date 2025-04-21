
#include <iostream>
using namespace std;


struct Node{
    int info;
    Node* pNext;
};

struct List{
    Node* pHead = NULL;
    Node* pTail= NULL;
};
Node* creatNode(int x){
    Node* p= new Node;
    p->info=x;
    p->pNext=NULL;
    return p;
}
void AddFirst(List &L, Node* p){
    if(L.pHead!=NULL){
        p->pNext=L.pHead;
        L.pHead=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
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
void InsertAfterx(List &L,int x,Node*p)
{
    Node*q=L.pHead;
    while(q)
    {
        if(q->info==x)
        {
            break;
        }
        q=q->pNext;
    }
    	if	(q	!=	NULL){
        p->pNext= q->pNext;
        q->pNext= p;
    if	(L.pTail==q)
        AddLast(L,p);
    }
    else AddFirst(L,p);
}
void PrintList(List L){
    Node* p= L.pHead;
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
}
int main()
{
    List L;
    while(1)
    {
        int chon;
        cin >> chon;
        if(chon==3)
        {
            PrintList(L);
            break;
        }
        else if(chon==2)
        {
            int a,b;
            cin >> a >> b;
            Node*p=creatNode(b);
            InsertAfterx(L,a,p);
        }
        else if(chon==1)
        {
            int x;
            cin >> x;
            Node*p=creatNode(x);
            AddLast(L,p);
        }
        else
        {
                int x;
            cin >> x;
            Node*p=creatNode(x);
            AddFirst(L,p);
        }
    }
    return 0;
}
