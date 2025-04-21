
#include <iostream>
using namespace std;

struct TNODE {
int key;
TNODE* pLeft;
TNODE* pRight;
};
typedef TNODE* Tree;

void CreatTree(Tree &T){
    T=NULL;
}

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
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->pLeft);
        cout << T->key << " ";
        LNR(T->pRight);
    }
}
bool isFullBinaryTree(Tree T)
{
    if(T==NULL)
        return 1;
        bool left=isFullBinaryTree(T->pLeft);
        bool right=isFullBinaryTree(T->pRight);
        if(T->pLeft!=NULL && T->pRight==NULL || T->pLeft==NULL && T->pRight!=NULL)
        return 0;
    if(left==1 && right==1)
        return 1;
    else
        return 0;

}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"LNR: "; LNR(T);
	int i=isFullBinaryTree (T);
	if(i==0) cout<<"\nThe tree is not a Full Binary Tree";
    else cout<<"\nThe tree is a Full Binary Tree";
	return 0;
}


