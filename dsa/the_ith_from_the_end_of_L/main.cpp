
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
int Size(List &L){
    int dem=0;
    node*p=L.pHead;
    while(p!=NULL){
        dem++;
        p=p->pNext;
    }
    return dem;
}
node*findElementFromEnd(List L,int vt)
{
    int n=Size(L);
     node* p= L.pHead;
       if(p==NULL)
    {
        cout << "List is empty";
        return NULL;
    }
    int i=-1;
    while(p!= NULL){
            i++;
            if(i==n-vt)
            {
                 return creatnode(p->info);
            }
        p=p->pNext;
    }
    cout << "The index is invalid";
    return NULL;
}
int main()
{
    List L;
    Init(L);
    int n; cout<<"Enter a number: "; cin>>n;
    cout<<"\nEnter a sequence of "<<n<<" numbers: ";
    inputList(L,n);
    cout<<"\nThe created Linked List: ";
    outputList(L);

    int i; cout<<"\nEnter a number: "; cin>>i;
    cout<<"\nThe element at index "<<i<<" (from the end of L): ";
    node *p = findElementFromEnd(L,i);
    if(p) cout<<p->info;


    return 0;
}
