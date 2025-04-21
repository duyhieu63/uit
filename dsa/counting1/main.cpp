
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
void NLR(Tree Root,int &k) {
    if (Root != NULL) {
            k++;
    NLR(Root->pLeft,k);
    NLR(Root->pRight,k);
}
}
int countNodes(Tree Root) {
    int k=0;
    NLR(Root,k);
    return k;
}
void listLeafs(Tree Root,int &k)
{
    if (Root != NULL) {
    if(Root->pLeft==NULL && Root->pRight==NULL) k++;
    listLeafs(Root->pLeft,k);
   listLeafs(Root->pRight,k);
}
}
int countLeafs(Tree T)
{
     int k=0;
    listLeafs(T,k);
    return k;
}
void listInternalNodes(Tree Root,int &i)
{
    if (Root != NULL) {
    if(Root->pLeft!=NULL || Root->pRight!=NULL)
        {
            i++;
        }
   listInternalNodes(Root->pLeft,i);
  listInternalNodes(Root->pRight,i);
}
}
int countInternalNodes(Tree T)
{
     int k=0;
    listInternalNodes(T,k);
    if(k==0)
        return 0;
    return k-1;
}
void listNodesWithTwoChildren(Tree Root,int &i) {
    if (Root != NULL) {
    if(Root->pLeft!=NULL && Root->pRight!=NULL) i++;
    listNodesWithTwoChildren(Root->pLeft,i);
    listNodesWithTwoChildren(Root->pRight,i);
}
}
void listNodesWithOneChild(Tree Root,int &i)
{
    if (Root != NULL) {
    if(Root->pLeft==NULL && Root->pRight!=NULL||Root->pLeft!=NULL && Root->pRight==NULL)
        {
            i++;
        }
   listNodesWithOneChild(Root->pLeft,i);
 listNodesWithOneChild(Root->pRight,i);
}
}
int countOneChild(Tree T)
{
     int k=0;
    listNodesWithOneChild(T,k);
    return k;
}
int countTwoChildren(Tree T)
{
     int k=0;
    listNodesWithTwoChildren(T,k);
    return k;
}
void Less(Tree Root,int x,int &k) {
    if (Root != NULL) {
            if(Root->key<x)
            {
                k++;
            }
    Less(Root->pLeft,x,k);
    Less(Root->pRight,x,k);
}
}
int  countLess(Tree T,int x)
{
    int k=0;
    Less(T,x,k);
    return k;
}
void GreaterandLess(Tree Root,int x,int y,int &k) {
    if (Root != NULL) {
            if(Root->key>x && Root->key<y)
            {
                k++;
            }
    GreaterandLess(Root->pLeft,x,y,k);
    GreaterandLess(Root->pRight,x,y,k);
}
}
int  countBetweenValues(Tree T,int x,int y)
{
    int k=0;
    GreaterandLess(T,x,y,k);
    return k;
}
int main()
{
	Tree T = NULL;
	inputTree(T);

    cout<<"Number of nodes: " << countNodes(T)<<endl;
	cout<<"Number of leaf nodes: " << countLeafs(T)<<endl;
	cout<<"Number of internal nodes: "<< countInternalNodes(T)<<endl;
	cout<<"Number of nodes with one child: "<< countOneChild(T)<<endl;
	cout<<"Number of nodes with two children: "<< countTwoChildren(T)<<endl;

//	int x;cout<<"Enter x: ";cin>>x;
//	cout<<"\nNumber of nodes less than "<<x<<": "<< countLess(T,x)<<endl;
//	int y; cout<<"Enter x,y: ";cin>>x>>y;
//	cout<<"\nNumber of nodes greater than "<<x<<" and less than "<<y<<": "<< countBetweenValues(T,x,y)<<endl;

	return 0;
}
