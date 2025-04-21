
#include <iostream>
#include <stack>
#include <queue>
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
void LRN(Tree Root)
    {
//        if(Root==NULL)
//            return;
//        stack<node*> st;
//        node *current=Root;
//        node*lastVisited=NULL;
//        while(current||st.empty()==0)
//        {
//            if(current)
//            {
//                st.push(current);
//                current=current->left;
//            }
//            else
//            {
//                node*temp=st.top();
//                if(temp->right&&lastVisited!=temp->right)
//                {
//                    current=temp->right;
//                }
//                else
//                {
//                    cout << temp->info << " ";
//                    lastVisited=temp;
//                    st.pop();
//                }
//            }
//        }
    if(!Root)
        return;
    stack<node*>st1,st2;
    st1.push(Root);
    while(st1.empty()==0)
    {
        node*curr=st1.top();
        st1.pop();
        st2.push(curr);
        if(curr->left)
        {
            st1.push(curr->left);
        }
        if(curr->right)
        {
            st1.push(curr->right);
        }
    }
    while(st2.empty()==0)
    {
        cout << st2.top()->info << " ";
        st2.pop();
    }
    }
void LNR(Tree Root)
{
    stack<node*>st;
    node*current=Root;
    while(current||!st.empty())
    {
        while(current)
        {
            st.push(current);
            current=current->left;
        }
        cout << st.top()->info << " ";
        current=st.top()->right;
        st.pop();
    }
}
void NLR(Tree Root)
{
    stack<node*>st;
    st.push(Root);
    while(st.empty()==0)
    {
        node*curr=st.top();
        st.pop();
        cout << curr->info << " ";
        if(curr->right)
        st.push(curr->right);
        if(curr->left)
            st.push(curr->left);
    }
}
int main()
{
	Tree T = NULL;
	inputTree(T);
	cout<<"\nLRN: "; LNR(T);
	return 0;
}
