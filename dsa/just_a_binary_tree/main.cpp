
#include <iostream>
using namespace std;

struct TNODE {
int key;
TNODE* pLeft;
TNODE* pRight;
};
typedef TNODE* Tree;
TNODE* getNode(int x){
    TNODE* p= new TNODE;
    p->key=x;
    p->pLeft=NULL;
    p->pRight=NULL;
    return p;
}
TNODE* Search(Tree T,int b)
{
    if(T)
    {
        if(T->key==b)
            {
                return T;
            }
        TNODE*a=Search(T->pLeft,b);
       TNODE*b1=Search(T->pRight,b);
       if(a==NULL && b1==NULL)
        return NULL;
       else if(a==NULL)
        return b1;
       else
        return a;
    }
    return T;
}
void SetLeft(TNODE*node,int c)
{
    if(node==NULL)
    {
        cout << "Node khong ton tai" << endl;
        return;
    }
    TNODE*p=getNode(c);
    if(node->pLeft)
    {
        cout << "Da co node con ben trai" << endl;
    }
    else
    {
        node->pLeft=p;
    }
}
void SetRight(TNODE*node,int c)
{
    if(node==NULL)
    {
        cout << "Node khong ton tai" << endl;
        return;
    }
    TNODE*p=getNode(c);
    if(node->pRight)
    {
        cout << "Da co node con ben phai" << endl;
    }
    else
    {
        node->pRight=p;
    }
}
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->pLeft);
        cout << T->key << " ";
        LNR(T->pRight);
    }
}
int main()
{
	Tree T = NULL;
	int x,b,c; char a;
	cin>>x;	T=getNode(x); // tao nut goc
	while(true)
    {
        cin>>a; // Ky tu cho biet chen vao trai hay phai
        if(a!='L'&& a!='R') break; // Neu khong phai L hoac R thi ket thuc viec tao cay
        cin>>b>>c;
        if(a=='L') SetLeft(Search(T,b),c); // chen c vao ben trai b
        else if (a=='R') SetRight(Search(T,b),c); // chen c vao ben phai b
    }
	cout<<"\nLNR: "; LNR(T); cout<<endl;

	return 0;
}
