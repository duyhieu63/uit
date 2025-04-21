
#include <iostream>
using namespace std;

struct TNODE {
int key;
TNODE* pLeft;
TNODE* pRight;
};
typedef TNODE* Tree;
typedef TNODE Node;
TNODE* CreatTNode(int x){
    TNODE* p= new TNODE;
    p->key=x;
    p->pLeft=NULL;
    p->pRight=NULL;
    return p;
}
void Insert(Tree &root, int x){
    if(root){
        if(root->key==x) return;
        else if(x>root->key) return Insert(root->pRight,x);
        else return Insert(root->pLeft,x);
    }
    root=CreatTNode(x);
}
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->pLeft);
        cout << T->key << " ";
        LNR(T->pRight);
    }
}
void inputTree(Tree &T)
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin >> value;
        Insert(T,value);
    }
}
Node *Search(Tree root,int x)
{
    TNODE* p=root;
    while(p!=NULL){
        if(p->key==x) return p;
        else if(p->key < x) p=p->pRight;
        else p=p->pLeft;
    }
    return NULL;
}
int minValue(Tree T)
{
    TNODE* p=T;
    while(p->pLeft!=NULL){
        p=p->pLeft;
    }
    return p->key;
}
int maxValue(Tree T)
{
    TNODE* p=T;
    while(p->pRight!=NULL){
        p=p->pRight;
    }
    return p->key;
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"LNR: "; LNR(T); cout<<endl;


    int x; cout<<"\nEnter the element you want to find: ";cin>>x;
    Node *p=Search(T,x);
    if (p) cout<< "Found";
    else cout<<"Not found";
    cout<<"\nMinimum value in BTS is "<<minValue(T);
    cout<<"\nMinimax value in BTS is "<<maxValue(T);


	return 0;
}
