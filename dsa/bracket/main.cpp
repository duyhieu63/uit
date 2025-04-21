/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include<string>
#include<cstring>
#include <iostream>

#define MAX 2000
#define NULLDATA -1

using namespace std;

struct Stack
{
    char arr[MAX];
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
char Top(Stack&S)
{
    if(isEmpty(S))
        return -1;
    return S.arr[S.n-1];
}
void Pop(Stack&S)
{
    S.arr[S.n-1]=NULLDATA;
    S.n--;
}
void Push(Stack&S,char x)
{
    S.arr[S.n]=x;
    S.n++;
}
int isValid(string expr)
{
    int ans=0;
    Stack S;
    Init(S);
    for(int i=0;i<expr.size();i++)
    {
        if(expr[i]=='(')
        {
            Push(S,expr[i]);
        }
        else
        {
            if(S.n==0)
                return 0;
                Pop(S);
                ans++;
        }
    }
    return isEmpty(S)?1:0;
}

int main()
{
	string expr; cin>>expr;
	cout<< isValid(expr);
	return 0;
}



