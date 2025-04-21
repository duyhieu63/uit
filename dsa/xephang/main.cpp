

#include  <bits/stdc++.h>
using namespace std;
struct DNode
{
	int info;
	DNode *pNext, *pPrev;
};
struct DList
{
	DNode *pHead, *pTail;
};
vector<DNode*>a(2*1e5);
void init(DList &L)
{
    L.pHead=NULL;
    L.pTail=NULL;
}
DNode* creatNode(int x){
    DNode* p= new DNode;
    p->info=x;
    p->pNext=NULL;
    p->pPrev=NULL;
    return p;
}
void addTail(DList &L, int x){
    DNode* p=creatNode(x);
    if(L.pTail!=NULL){
            p->pPrev=L.pTail;
        L.pTail->pNext= p;
        L.pTail=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
    a[x]=p;
}
void PrintList(DList L)
{
     DNode* p= L.pHead;
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
}
void addHead(DList &L,DNode*p){

    if(L.pHead!=NULL){
            L.pHead->pPrev=p;
        p->pNext=L.pHead;
        L.pHead=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
}
void RemoveandAdd(DList&L,int x)
{
    DNode*p=a[x];
    if(p==L.pHead)
    {
        L.pHead=p->pNext;
        L.pHead->pPrev=NULL;
    }
    else if(p==L.pTail)
    {
        L.pTail=p->pPrev;
        L.pTail->pNext=NULL;
    }
    else
    {
        p->pPrev->pNext=p->pNext;
        p->pNext->pPrev=p->pPrev;
    }
    addHead(L,p);
}
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    DList L;
    init(L);
    for(int i=1;i<=n;i++)
    {
        addTail(L,i);
    }
    while(m--)
    {
        int sv;
        cin >> sv;
        RemoveandAdd(L,sv);
        cout << L.pTail->info << " ";
    }
    return 0;
}
