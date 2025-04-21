
#include <iostream>

#define MAX 2000
#define NULLDATA -1

using namespace std;

struct Stack
{
    int arr[MAX];
    int n; // so luong phan tu cua stack
};
void Init(Stack&S)
{
    S.n=0;
}
bool isEmpty(Stack S)
{
    return (S.n==0)?true:false;
}
bool iSFull(Stack S)
{
    return S.n==MAX;
}
int Top(Stack&S)
{
    if(isEmpty(S))
        return -1;
    return S.arr[0];
}
void Pop(Stack&S)
{
    for(int i=0;i<(S.n)-1;i++)
    {
        S.arr[i]=S.arr[i+1];
    }
    S.n--;
}
void Push(Stack&S,int x)
{
    if(iSFull(S))
        return;
    S.arr[S.n]=x;
    S.n++;
//    for(int i=S.n;i>=1;i--)
//    {
//        S.arr[i]=S.arr[i-1];
//    }
//    S.arr[0]=x;
}
void printStack(Stack S)
{
    if(isEmpty(S)==0)
    {
        for(int i=0;i<S.n;i++)
    {
        cout << S.arr[i] << " ";
    }
    }
    else
    {
        cout <<"Stack is empty";
    }
}
int main()
{
    Stack S;Init(S);
    int n,x;
    cin>>n;
    for (int i= 1; i<=n; i++)
    {
        cin>>x;
        Push(S,x);
    }
    cout<<"Stack:";
    printStack(S);
    cout<<"\nTop:"<<Top(S);
    Pop(S);
    cout<<"\nUpdated Stack:";
    printStack(S);
    cout<<"\nTop:"<<Top(S);
    return 0;
}




