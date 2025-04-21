
#include <iostream>

#define MAX 2000
#define NULLDATA -1

using namespace std;

struct Stack
{
    int arr[MAX];
    int t; // t là chỉ số của phần tử cuối mảng, tức là đỉnh stack
};
void Init(Stack &S)
{
    S.t=-1;
}
bool isEmpty(Stack S)
{
    return (S.t+1==0)?true:false;
}
bool iSFull(Stack S)
{
    return S.t+1==MAX;
}
int Top(Stack S)
{
    if(isEmpty(S))
        return -1;
    return S.arr[S.t];
}
void Pop(Stack&S)
{
    if(isEmpty(S))
        return;
    S.arr[S.t]=NULLDATA;
    S.t--;
}
void Push(Stack&S,int x)
{
    if(iSFull(S))
        return;
        S.t++;
    S.arr[S.t]=x;
}
void printStack(Stack S)
{
    if(isEmpty(S)==0)
    {
        for(int i=0;i<S.t+1;i++)
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




