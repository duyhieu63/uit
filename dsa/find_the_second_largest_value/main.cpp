
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
int maxval(Tree root)
{
  int ans = root->key;
        while (root->pRight) {
            ans = root->pRight->key;
            root = root->pRight;
        }
        return ans;
}
void secondLargest(Tree T)
{
    if(T==NULL || T->pRight==NULL && T->pLeft==NULL)
        return;
    if(T->pRight==NULL)
    {
        cout << "2nd largest value is " << maxval(T->pLeft);
    }
    else
    {
        TNODE*temp=NULL;
        while(T->pRight)
        {
            temp=T;
            T=T->pRight;
        }
        if(T->pLeft!=NULL)
        {
            cout << "2nd largest value is " << maxval(T->pLeft);
        }
        else
        cout << "2nd largest value is " << temp->key;
    }
}
int main()
{
	Tree T = NULL;
	inputTree(T);
    secondLargest(T);
	return 0;
}
