
#include <iostream>

#define MAX 2000
#define NULLDATA -1

using namespace std;

struct Stack
{
    int arr[MAX];
    int n; // so luong phan tu cua stack
};
void Init(Stack &S)
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
int Top(Stack S)
{
    if(isEmpty(S))
        return -1;
    return S.arr[S.n-1];
}
void Pop(Stack&S)
{
    if(isEmpty(S))
        return;
    S.arr[S.n-1]=NULLDATA;
    S.n--;
}
void Push(Stack&S,int x)
{
    if(iSFull(S))
        return;
        S.n++;
    S.arr[S.n-1]=x;
}
void printStack(Stack S)
{
    if(isEmpty(S)==0)
    {
        for(int i=S.n-1;i>=0;i--)
    {
        cout << S.arr[i] << "";
    }
    }
    else
    {
        cout <<"Stack is empty";
    }
}
void DecimaltoBinary2(int n,Stack &S)
{
    if(n==0)
    {
        Push(S,0);
    }
    while(n)
    {
        Push(S,n%2);
        n/=2;
    }
}
int main()
{
    Stack S;Init(S);
    int n,x;
    cin>>n;
    DecimaltoBinary2(n,S);
    printStack(S);
    return 0;
}




