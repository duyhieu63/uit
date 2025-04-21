#include <iostream>
using namespace std;

struct TNODE {
int key;
TNODE* pLeft;
TNODE* pRight;
};
typedef TNODE* TREE;

void CreatTree(TREE &T){
    T=NULL;
}

TNODE* CreatTNode(int x){
    TNODE* p= new TNODE;
    p->key=x;
    p->pLeft=NULL;
    p->pRight=NULL;
    return p;
}
TNODE* SearchNode(TREE root, int x){
    TNODE* p=root;
    while(p!=NULL){
        if(p->key==x) return p;
        else if(p->key < x) p=p->pRight;
        else p=p->pLeft;
    }
    return NULL;
}

void Insert(TREE &root, int x){
    if(root){
        if(root->key==x) return;
        else if(x>root->key) return Insert(root->pRight,x);
        else return Insert(root->pLeft,x);
    }
    root=CreatTNode(x);
}

void inorder(TREE T) {
    if (T != NULL) {
        inorder(T->pLeft);
        cout << T->key << "\t";
        inorder(T->pRight);
    }
}
void preorder(TREE Root) {
    if (Root != NULL) {
    if(Root->pLeft!=NULL && Root->pRight!=NULL) cout << Root->key << "\t";
    preorder(Root->pLeft);
    preorder(Root->pRight);
}
}
void postorder(TREE Root) {
    if (Root != NULL) {
    postorder(Root->pLeft);
    postorder(Root->pRight);
    cout << Root->key << "\t";
    }
}

TNODE* findmin(TREE root){
    TNODE* p=root;
    if(p==NULL) return NULL;
    while(p!=NULL){
        p=p->pLeft;
    }
    return p;
}
TNODE* findmax(TREE root){
    TNODE* p=root;
    if(p==NULL) return NULL;
    while(p!=NULL){
        p=p->pRight;
    }
    return p;
}
void DeleteNodeX(TREE &T, int x) {
    if (T != NULL) {
        if (T->key < x) DeleteNodeX(T->pRight, x);
        else {
            if (T->key > x) DeleteNodeX(T->pLeft, x);
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

void ThayThe(TREE &p, TREE &T) {
    if (T->pLeft != NULL)
        ThayThe(p, T->pLeft);
    else {
        p->key = T->key;
        p = T;
        T = T->pRight;
    }
}
int Height(TNODE* T) {
    if (!T) return -1;
    int a = Height(T->pLeft);
    int b = Height(T->pRight);
    return (a > b ? a : b) + 1;
}

int DemNode(TREE t) {
    if (t == NULL)
    return 0;
    int a = DemNode(t->pLeft);
    int b = DemNode(t->pRight);
    return (a + b + 1);
}
int countNodes(Tree T,int ans=0)
{
     if (T != NULL) {
        ans= countNodes(T->pLeft,ans);
            ans++;
        ans= countNodes(T->pRight,ans);
    }
    return ans;
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
int main() {
    TREE T;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>> x;
        Insert(T,x);
    }
    preorder(T);

    return 0;
}
