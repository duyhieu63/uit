#include <bits/stdc++.h>
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
TNODE* SearchNode(Tree root, int x,vector<int>&path){
    TNODE* p=root;
    while(p!=NULL){
        path.push_back(p->key);
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
int main()
{
    Tree T=NULL;
    inputTree(T);
    int x;
    cin >> x;
    vector<int> path;
    if(SearchNode(T,x,path))
    {
        cout << "Found. Path: ";
        for(auto x:path)
            cout << x << " ";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
