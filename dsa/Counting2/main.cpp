
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
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->pLeft);
        cout << T->key << " ";
        LNR(T->pRight);
    }
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
int depthOfTree(TNODE* T) {
    if (!T) return -1;
    int a = depthOfTree(T->pLeft);
    int b = depthOfTree(T->pRight);
    return (a > b ? a : b) + 1;
}
void countEven(Tree T,int &ans)
{
    if (T != NULL) {
        countEven(T->pLeft,ans);
        if(T->key%2==0)
        {
            ans++;
        }
        countEven(T->pRight,ans);
    }
}
void countOdd(Tree T,int &ans)
{
    if (T != NULL) {
        countOdd(T->pLeft,ans);
        if(T->key%2)
        {
            ans++;
        }
        countOdd(T->pRight,ans);
    }
}
int countNegative(Tree T,int ans=0)
{
    if (T != NULL) {
        ans= countNegative(T->pLeft,ans);
        if(T->key<0)
            ans++;
        ans= countNegative(T->pRight,ans);
    }
    return ans;
}
int countPositive(Tree T,int ans=0)
{
    if (T != NULL) {
        ans= countPositive(T->pLeft,ans);
        if(T->key>0)
            ans++;
        ans= countPositive(T->pRight,ans);
    }
    return ans;
}
bool check(int x)
{
    if(x<2)
        return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int countPrime(Tree T,int ans=0)
{
    if (T != NULL) {
        ans= countPrime(T->pLeft,ans);
        if(check(T->key))
            ans++;
        ans= countPrime(T->pRight,ans);
    }
    return ans;
}
void listPrime(Tree T) {
    if (T != NULL) {
        if(check(T->key))
            cout << T->key << " ";
             listPrime(T->pLeft);
        listPrime(T->pRight);
    }
}
int main()
{
	Tree T = NULL;
	inputTree(T);
    cout<<"LNR: "; LNR(T); cout<<endl;

	cout<<"Number of nodes: " << countNodes(T)<<endl;
    cout<<"Depth of Tree: "<<depthOfTree(T)<<endl;

    int count_even = 0, count_odd =0;
    countEven(T, count_even);countOdd(T, count_odd);
    cout<<"Number of even nodes: "<<count_even<<endl;
    cout<<"Number of odd nodes: "<<count_odd<<endl;

    cout<<"Number of positive nodes: "<<countPositive(T)<<endl;
    cout<<"Number of negative nodes: "<<countNegative(T)<<endl;

    cout<<"Number of prime nodes: "<<countPrime(T)<<endl;
    cout<<"Prime numbers: "; listPrime(T);



	return 0;
}
