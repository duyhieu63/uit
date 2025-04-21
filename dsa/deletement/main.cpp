
#include <iostream>
using namespace std;

struct TNODE {
int key;
TNODE* pLeft;
TNODE* pRight;
};
typedef TNODE* Tree;
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
void ThayThe(Tree &p, Tree &T) {
    if (T->pLeft != NULL)
        ThayThe(p, T->pLeft);
    else {
        p->key = T->key;
        p = T;
        T = T->pRight;
    }
}
void deleteNode(Tree&T, int x) {
    if (T != NULL) {
        if (T->key < x) deleteNode(T->pRight, x);
        else {
            if (T->key > x) deleteNode(T->pLeft, x);
            else {
                TNODE *p;
                p = T;
                if (T->pLeft == NULL) T = T->pRight;
                else {
                    if (T->pRight == NULL)T = T->pLeft;
                    else ThayThe(p, T->pRight);
                }
                    delete p;
            }
        }
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
void NLR(Tree T) {
    if (T != NULL) {
            cout << T->key << " ";
        NLR(T->pLeft);
        NLR(T->pRight);
    }
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"NLR: "; NLR(T);
    int x; cout<<"\nEnter the element you want to delete: ";cin>>x;
    deleteNode(T,x);
    cout<<"\nNLR: "; NLR(T);

	return 0;
}
