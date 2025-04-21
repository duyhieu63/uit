
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
void rotateLeft(Tree &Root)
{
    if(Root->pRight==NULL)
    {
        cout << "\nKhong the xoay trai vi khong co nut con ben phai";
        return;
    }
    TNODE*p=Root->pRight;
    Root->pRight=p->pLeft;
    p->pLeft=Root;
    Root=p;
}
void NLR(Tree Root) {
    if (Root != NULL) {
            cout << Root->key << " ";
    NLR(Root->pLeft);
    NLR(Root->pRight);
}
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	if(T==NULL)
    {
        cout <<"\nKhong the xoay vi cay rong";
    }
    else
	cout << "NLR: ";
	NLR(T);
	rotateLeft(T);
	cout << "\nNLR: ";
		NLR(T);
}
