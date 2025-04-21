
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
    typedef struct Node* Tree;
    void Insert(Tree &root, int id,string name,string type,int year,int warranty){
        if(root){
            if(root->info.warranty==warranty) return;
            else if(warranty>root->info.warranty) return Insert(root->pRight,id,name,type,year,warranty);
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
    void listProduct(Tree T,string type)
    {
        if(T)
        {
            listProduct(T->pLeft,type);
            listProduct(T->pRight,type);
            if(T->info.type==type)
            cout << T->info.id << " " << T->info.name << " " <<T->info.type << " " <<T->info.year << " " << T->info.warranty << endl;

        }
    }
    int countProduct(Tree T,int x,int ans=0)
    {
        if(T)
        {
            ans=countProduct(T->pLeft,x,ans);
             ans=countProduct(T->pRight,x,ans);
             if(T->info.warranty>x)
                ans++;
        }
        return ans;
    }
int main()
{
    Tree T = NULL;
    inputTree(T);

    string type;  cin.ignore(); getline(cin,type);
    cout<<"List of products whose type is  "<<type<<": ";
    cout<<"\nID\tName\tType\tYear\tWarranty\n";
    listProduct(T,type);
    int year;cin>>year;
    cout<<"Number of products with more than "<<year<<" years of warranty: "<<countProduct(T,year)<<endl;
	return 0;
}

