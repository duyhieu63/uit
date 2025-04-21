
#include <iostream>
using namespace std;



struct node{
    int info;
    node* pNext;
};
node* creatnode(int x){
    node* p= new node;
    p->info=x;
    p->pNext=NULL;
    return p;
}
void inputList(node *&L,int n)
{
    node*temp=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        node*p=creatnode(x);
        if(L==NULL)
        {
            L=p;
        }
        else
        {
            temp->pNext=p;
        }
        temp=p;
    }
}
void MySort(node*&L){
    for(node*p=L; p!=NULL; p=p->pNext){
            node* minw=p;
        for(node*q=p->pNext; q!=NULL; q=q->pNext){
            if(minw->info>q->info) minw=q;
        }
        swap(minw->info,p->info);
    }
}
void outputList(node*L)
{
    node*p=L;
    while(p)
    {
        cout << p->info<<" ";
        p=p->pNext;
    }
}
int MySearch(node*l,int x)
{
    node*p=l;
    int pos=0;
    while(p)
    {
        if(p->info==x)
        {
            return pos;
        }
        pos++;
        p=p->pNext;
    }
    return -1;
}
int main()
{
    int n; cin>>n;
    node* L=NULL;
    inputList(L,n);
    MySort(L);
    cout<<"Sorted List: ";
    outputList(L);
    cout<< "\nFind an element: ";
    int x; cin>>x;
    cout<<x<<endl;
    int result = MySearch(L,x);
    if (result ==-1) cout<<x<<" is not found";
    else cout<<x<<" is found at the position " << result;

	return 0;



	return 0;
}

