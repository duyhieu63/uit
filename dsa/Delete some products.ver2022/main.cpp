
#include <iostream>
#include <string>
using namespace std;

typedef struct Product
{
    int id;
    string name;
    string type;
    int year;
    int warranty;
} PRO;

struct Node
{
	PRO info;
	Node *pLeft;
	Node *pRight;
};
typedef struct Node* Tree;

void printProduct(PRO x)
{
    cout <<x.id<<"\t"<<x.name<<"\t"<<x.type<<"\t"<<x.year<<"\t"<<x.warranty<<endl;

}
Node* CreatTNode(int id,string name,string type,int year,int warranty){
        Node* p= new Node;
        p->info.id=id;
        p->info.name=name;
        p->info.type=type;
        p->info.year=year;
        p->info.warranty=warranty;
        p->pLeft=NULL;
        p->pRight=NULL;
        return p;
    }
 void Insert(Tree &root, int id,string name,string type,int year,int warranty){
        if(root){
            if(root->info.id==id) return;
            else if(id>root->info.id) return Insert(root->pRight,id,name,type,year,warranty);
            else return Insert(root->pLeft,id,name,type,year,warranty);
        }
        root=CreatTNode(id,name,type,year,warranty);
    }
    void inputTree(Tree &T)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int id;
            cin >> id;
            cin.ignore();
            string name;
            getline(cin,name);
            string type;
            getline(cin, type);
            int year;
            cin >> year;
            int warranty;
            cin >> warranty;
            Insert(T,id,name,type,year,warranty);
        }
    }
    void LNR(Tree T)
    {
         if(T)
        {
           LNR(T->pLeft);
            cout << T->info.id << " " << T->info.name << " " <<T->info.type << " " <<T->info.year << " " << T->info.warranty << endl;
             LNR(T->pRight);
        }
    }
    void ThayThe(Tree &p, Tree &T) {
    if (T->pLeft != NULL)
        ThayThe(p, T->pLeft);
    else {
        p->info = T->info;
        p = T;
        T = T->pRight;
    }
}
    void DeleteNodeX(Tree &T) {
    if (T != NULL)
        {
                Node *p;
                p = T;
                if (T->pLeft == NULL) T = T->pRight;
                else {
                    if (T->pRight == NULL)T = T->pLeft;
                    else ThayThe(p, T->pRight);
                }
                    delete p;
            }

}
    void findAndDeleteProduct(Tree&T)
    {
        if(T)
        {
           findAndDeleteProduct(T->pLeft);
             findAndDeleteProduct(T->pRight);
             if(T->info.year+T->info.warranty<2022)
            {
                DeleteNodeX(T);
            }
        }
    }
int main()
{
    Tree T = NULL;
    inputTree(T);
    cout<<"List of products: ";
    cout<<"\nID\tName\tType\tYear\tWarranty\n";
    LNR(T);
    // Xoá các sản phẩm đã hết hạn bảo hành, thoả điều kiện: Năm sản xuất + số năm bảo hành < năm hiện tại (2022)

    cout<<"\nAfter deleting: ";
    findAndDeleteProduct(T);
    cout<<"\nID\tName\tType\tYear\tWarranty\n";
    LNR(T);

	return 0;
}

