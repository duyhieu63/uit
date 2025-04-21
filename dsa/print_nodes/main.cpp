
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
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->pLeft);
        cout << T->key << " ";
        LNR(T->pRight);
    }
}
void NLR(Tree Root) {
    if (Root != NULL) {
    cout << Root->key << " ";
    NLR(Root->pLeft);
    NLR(Root->pRight);
}
}
void LRN(Tree Root) {
    if (Root != NULL) {
    LRN(Root->pLeft);
    LRN(Root->pRight);
    cout << Root->key << " ";
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
void listNodesWithTwoChildren(Tree Root) {
    if (Root != NULL) {
    if(Root->pLeft!=NULL && Root->pRight!=NULL) cout << Root->key << " ";
    listNodesWithTwoChildren(Root->pLeft);
    listNodesWithTwoChildren(Root->pRight);
}
}
void listLeafs(Tree Root)
{
    if (Root != NULL) {
    if(Root->pLeft==NULL && Root->pRight==NULL) cout << Root->key << " ";
    listLeafs(Root->pLeft);
   listLeafs(Root->pRight);
}
}
void listInternalNodes(Tree Root,int i)
{
    if (Root != NULL) {
    if(Root->pLeft!=NULL || Root->pRight!=NULL)
        {
            if(i>0)
    cout << Root->key << " ";
        }
        i++;
   listInternalNodes(Root->pLeft,i);
  listInternalNodes(Root->pRight,i);
}
}
void listNodesWithOneChild(Tree Root)
{
    if (Root != NULL) {
    if(Root->pLeft==NULL && Root->pRight!=NULL||Root->pLeft!=NULL && Root->pRight==NULL)
        {
    cout << Root->key << " ";
        }
   listNodesWithOneChild(Root->pLeft);
 listNodesWithOneChild(Root->pRight);
}
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"\nNLR: "; NLR(T);
	cout<<"\nLRN: "; LRN(T);
	cout<<"\nLNR: "; LNR(T);

		cout<<"\nLeaf nodes: "; listLeafs(T);
	cout<<"\nInternal nodes: "; listInternalNodes(T,0); //co de san tham so thu 2 cho ai co nhu cau dung, SV khong dung tham so thu 2 nay cung khong sao
	cout<<"\nNodes with one child: "; listNodesWithOneChild(T);
	cout<<"\nNodes with two children: "; listNodesWithTwoChildren(T);

	return 0;
}
