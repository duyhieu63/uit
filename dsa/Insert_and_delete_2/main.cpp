/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;

struct Node{
    long long info;
    Node* pNext;
};

struct List{
    Node* pHead = NULL;
    Node* pTail= NULL;
};

Node* creatNode(long long x){
    Node* p= new Node;
    p->info=x;
    p->pNext=NULL;
    return p;
}

void PrintList(List L){
    Node* p= L.pHead;
    while(p->pNext!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
    if(p!=NULL)
    cout << p->info;
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
void RemoveHead(List	&l)	{
    Node	*p;
    if	(l.pHead	!=	NULL){
        p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete	p;
        if	(l.pHead==NULL) l.pTail=NULL;
    }
}
void RemoveTail(List &l)
{
    if(l.pHead==NULL)
        return;
    Node*p=l.pHead;
    Node*temp=NULL;
    while(p->pNext)
    {
        temp=p;
        p=p->pNext;
    }
    if(temp==NULL)
    {
        l.pHead=l.pTail=NULL;
        delete p;
    }
    else
    {
        temp->pNext=NULL;
        l.pTail=temp;
        delete p;
    }

}
int main()
{
    List l;
    int n;
    cin >> n;
    while(n--)
    {
        char x,y;
        cin >> x >> y;
        long long z;
        cin >> z;
        if(x=='+')
        {
            if(y=='H')
                {
                    AddFirst(l,creatNode(z));
                }
                else
                {
                    AddLast(l,creatNode(z));
                }
        }
        else
        {
            if(y=='H')
            {
                RemoveHead(l);
            }
            else
            {
                RemoveTail(l);
            }
        }
    }
    PrintList(l);
}

