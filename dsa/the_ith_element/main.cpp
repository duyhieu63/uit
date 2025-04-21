
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
node*findElement(List L,int vt)
{
     node* p= L.pHead;
       if(p==NULL)
    {
        cout << "List is empty";
        return NULL;
    }
    int i=0;
    while(p!= NULL){
            i++;
            if(i==vt)
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
    cout<<"\nThe element at index "<<i<<": ";
    node *p = findElement(L,i);
    if(p) cout<<p->info;


    return 0;
}
