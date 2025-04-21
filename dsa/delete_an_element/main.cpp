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
    if(p==NULL)
    {
        cout <<"blank";
        return;
    }
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
}
int RemoveAfterQ(List &l,Node*q){
    Node*p;
    if(q!=NULL){
        p=q->pNext;
        if	(p	!=	NULL){
            if	(p	==	l.pTail)
			l.pTail	=	q;
            q->pNext	=	p->pNext;
            delete	p;
        }
        return	1;
    }
    else return	0;
}
int	RemoveHead(List	&l)	{
    Node	*p;
    if	(l.pHead	!=	NULL){
        p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete	p;
        if	(l.pHead==NULL) l.pTail=NULL;
        return	1;
    }
    return	0;
}

int	RemoveX(List &l,int	x){
    Node*p,*q=NULL;	p=l.pHead;
		while((p!=NULL)	&&	(p->info!=x)){
                q=	p;
                p=	p->pNext;
        }
		if	(p	==	NULL) return 0;
		if	(q	!=	NULL)
        RemoveAfterQ(l,q);
		else RemoveHead(l);
		return	1;
}
int main()
{
    List L;
    while(1)
    {
        int chon;
        cin >> chon;
        if(chon==6)
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
        else if(chon==0)
        {
                int x;
            cin >> x;
            Node*p=creatNode(x);
            AddFirst(L,p);
        }
        else if(chon==5)
        {
            RemoveHead(L);
        }
        else
        {
            int x;
            cin >> x;
            RemoveX(L,x);
        }
    }
    return 0;
}
