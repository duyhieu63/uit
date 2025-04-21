#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

struct Node{
    int info;
    Node* pNext;
};

struct List{
    Node* pHead = NULL;
    Node* pTail= NULL;
};
void initList(List &L)
{
    L.pHead=NULL;
    L.pTail=NULL;
}
Node* creatNode(int x){
    Node* p= new Node;
    p->info=x;
    p->pNext=NULL;
    return p;
}

void PrintList(List L){
    Node* p= L.pHead;
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
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

void InsertAfterQ(List &L, Node*p, Node*q){
   	if	(q	!=	NULL){
        p->pNext= q->pNext;
        q->pNext= p;
    if	(L.pTail==q) L.pTail=p;
    }
    else AddFirst(L,q);
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
void Remove_k_th(LIST& L, int k) {
if (L.head == NULL) {
return;
}
Node* p = L.head;
if (k == 1) {
L.head = p->next;
delete p;
return;
}
Node* p1 = L.head;
for (int i = 0; i < k - 2 && p1 != NULL; i++) {
p1 = p1->next;
}
if (p1 == NULL || p1->next == NULL) {
return;
}
Node* p2 = p1->next;
p1->next = p2->next;
delete p2;
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
void Add_k_th(LIST &L,int k)
{

}
void Selection_Sort(List &L){
    for(Node*p=L.pHead; p!=NULL; p=p->pNext){
            Node* minw=p;
        for(Node*q=p->pNext; q!=NULL; q=q->pNext){
            if(minw->info>q->info) minw=q;
        }
        swap(minw->info,p->info);
    }
}
int main(){
    List L;
    int n; cin>> n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        Node*p=creatNode(x);
        AddLast(L,p);
    }
    RemoveX(L,2);
    Selection_Sort(L);
    PrintList(L);
    return 0;
}
