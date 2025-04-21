
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
        cout << "List is Empty";
        return;
    }
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
}
node*findMax(List L)
{
    int ans=INT_MIN;
     node* p= L.pHead;
       if(p==NULL)
    {
        cout << "List is Empty";
        return NULL;
    }
    while(p!= NULL){
        if(p->info>ans)
        {
            ans=p->info;
        }
        p=p->pNext;
    }
    return creatnode(ans);
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


    cout<<"\nThe maximum value: ";
    node *p = findMax(L);
    if(p) cout<<p->info;

    return 0;
}
