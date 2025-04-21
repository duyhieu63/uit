/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
using namespace std;
struct node
{
    int info;
    node *left, *right;
};
typedef node* Tree;
node* getNode(int x)
{
    node* p =new node;
    p->info=x;
    p->left=p->right=NULL;
    return p;
}
void insertTree(Tree &T, int x)
{
    if(!T) T=getNode(x);
    else
    {
        if(T->info==x) return;
        if(x<T->info) insertTree(T->left,x);
        else insertTree(T->right, x);
    }

}
void inputTree(Tree &T)
{
    int n,x; cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insertTree(T, x);
    }
}
void LNR(Tree T)
{
    if(!T) return;
    LNR(T->left);
    cout<<T->info<<" ";
    LNR(T->right);
}
node* removeLeafs(Tree T)
{
    if(T==NULL||T->left==NULL && T->right==NULL)
        return NULL;
    T->left=removeLeafs(T->left);
    T->right=removeLeafs(T->right);
    return T;
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"LNR: "; LNR(T);
	T = removeLeafs(T);
	cout<<"\nUpdated Tree: \n";
	cout<<"LNR: "; LNR(T);
	return 0;
}



