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
void Floor(Tree T,int x)
{
    if(T==NULL)
    {
        cout << 201;
        return;
    }
    TNODE* p=T;
    while(p!=NULL){
        if(p->key==x)
        {
            cout << p->key;
            return;
        }
        if(p->key > x) p=p->pLeft;
        else
        {
            if(p->pRight==NULL)
            {
                cout << p->key;
                return;
            }
            else
            {
                int temp=p->key;
                    while(p && p->key<x)
                    {
                        temp=p->key;
                        p=p->pRight;
                    }
                while(p&&p->key>x)
                {
                    p=p->pLeft;
                }
                if(p==NULL)
                {
                    cout << temp;
                    return;
                }
                else
                {
                    cout << maxval(p);
                    return;
                }
            }
        }
    }
    cout << 201;
    return;
}
int main()
{
    Tree T=NULL;
    inputTree(T);
    int x;
    cin >> x;
    Floor(T,x);
    return 0;
}
