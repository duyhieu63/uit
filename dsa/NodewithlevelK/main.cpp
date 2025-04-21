
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
TNODE* SearchNode(Tree root, int x){
    TNODE* p=root;
    while(p!=NULL){
        if(p->key==x) return p;
        else if(p->key < x) p=p->pRight;
        else p=p->pLeft;
    }
    return NULL;
}

void Insert(Tree &root, int x){
    if(root){
        if(root->key==x) return;
        else if(x>root->key) return Insert(root->pRight,x);
        else return Insert(root->pLeft,x);
    }
    root=CreatTNode(x);
}

void NLR(Tree Root) {
    if (Root == NULL) return;
        cout << Root->key << " ";

    NLR(Root->pLeft);
    NLR(Root->pRight);
}

void inputTree(Tree &T){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        Insert(T,x);
    }
}
void nodesWithLevel(Tree T, int k, int level = 0) {
    if (T == NULL) return;
    if (level == k) {
        cout << T->key << " ";
        return;
    }
    nodesWithLevel(T->pRight, k, level + 1);
    nodesWithLevel(T->pLeft, k, level + 1);
}
int main()
{
	Tree T = NULL;
	int k;
	cin >> k;
	inputTree(T);
    cout<<" (R->L) : ";
    nodesWithLevel(T,k);

	return 0;
}
