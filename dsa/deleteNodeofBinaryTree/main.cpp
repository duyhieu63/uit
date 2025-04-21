

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
        return;
    }
    TNODE*p=getNode(c);
    if(node->pLeft)
    {
        return;
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
        return;
    }
    TNODE*p=getNode(c);
    if(node->pRight)
    {
        return;
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
void DeleteLeft(TNODE*node)
{
    if(node==NULL)
    {
        cout << "Node khong ton tai" << endl;
        return;
    }
    if(node->pLeft==NULL)
    {
        cout << "Khong co node ben trai\n";
    }
    else
    {
        if(node->pLeft->pRight||node->pLeft->pLeft)
        {
             cout << "Khong la node la nen khong xoa duoc\n";
        }
        else
            node->pLeft=NULL;
    }
}
void DeleteRight(TNODE*node)
{
    if(node==NULL)
    {
        cout << "Node khong ton tai" << endl;
        return;
    }
    if(node->pRight==NULL)
    {
        cout << "Khong co node ben phai\n";
    }
    else
    {
        if(node->pRight->pRight||node->pRight->pLeft)
        {
             cout << "Khong la node la nen khong xoa duoc\n";
        }
        else
            node->pRight=NULL;
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
        if(a!='L'&& a!='R') break;
        cin>>b>>c;
        if(a=='L') SetLeft(Search(T,b),c);
        else if (a=='R') SetRight(Search(T,b),c);

    }
	cout<<"LNR: "; LNR(T);
	cout<<"\nDelete some nodes:\n";
	string s;
	while(true)
    {
        cin>>s; // Chuoi cho biet xoa ben trai hay ben phai
        if(s!="DL"&& s!="DR") break;
        cin>>b;
        if(s=="DL") DeleteLeft(Search(T,b));
        else if(s=="DR") DeleteRight(Search(T,b));

    }
    cout<<"\nLNR: "; LNR(T);

	return 0;
}
