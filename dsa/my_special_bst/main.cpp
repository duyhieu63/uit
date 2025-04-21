
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
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->pLeft);
        cout << T->key << " ";
        LNR(T->pRight);
    }
}
int getHeight(TNODE* root)
{
        if (root == NULL) return 0;
        int leftHeight = getHeight(root->pLeft);
        int rightHeight = getHeight(root->pRight);
        if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 0)
            return -1;
        return max(leftHeight, rightHeight) + 1;
}
int isSpecialBST(Tree T)
{
     return getHeight(T) != -1;
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"LNR: "; LNR(T);
	int i=isSpecialBST (T);
	if(i==0) cout<<"\nThe tree is not a (My)Special-BST";
    else cout<<"\nThe tree is a (My)Special-BST";
	return 0;
}


