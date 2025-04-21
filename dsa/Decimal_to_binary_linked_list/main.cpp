
#include <iostream>
using namespace std;

/*Cach 1: Khi da cai dat List roi, dinh nghia Stack dua tren List
struct Stack
{
	List L;
};

Cach 2: Cai dat lai Stack tu dau, giong nhu List
struct node
{
    int info;
    node *next;
};
struct Stack
{
    node *pHead; // pTail khong co cung duoc

};*/

struct Node{
    int info;
    Node* pNext;
};

struct List{
    Node* pHead;
    Node* pTail;
};
Node* creatNode(int x){
    Node* p= new Node;
    p->info=x;
    p->pNext=NULL;
    return p;
}
struct Stack
{
    List L;
};
void Init(Stack&S)
{
    S.L.pTail=NULL;
    S.L.pHead=NULL;
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
void Push(Stack &S,int x)
{
    Node*p=creatNode(x);
    AddFirst(S.L,p);
}
void RemoveHead(List	&l)	{
    Node	*p;
        p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete	p;
}
void Pop(Stack &S)
{
    RemoveHead(S.L);
}
void DecimaltoBinary1(int n,Stack &S)
{
        while(n!=0)
        {
            Push(S,n%2);
            n/=2;
        }
}
void printStack(Stack S)
{
    if(S.L.pHead==NULL)
        cout << 0 << endl;
    else
    {
        Node*p=S.L.pHead;
        while(p)
        {
            cout << p->info;
            p=p->pNext;
        }
    }
}
int main()
{
    Stack S;Init(S);
    int n,x;
    cin>>n;
    DecimaltoBinary1(n,S);
    printStack(S);
    return 0;
}

