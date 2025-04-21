#include <iostream>

using namespace std;
struct Node{
    int value;
    Node* pNext;
};
struct List{
    Node* pHead = NULL;
    Node* pTail= NULL;
};
Node* creatNode(int x){
    Node* p= new Node;
    p->value=x;
    p->pNext=NULL;
    return p;
}
void AddFirst(List &L, Node* p){
    if(L.pHead!=NULL){
        p->pNext=L.pHead;
        L.pHead=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
}
void AddLast(List &L, Node*p){
    if(L.pTail!=NULL){
        L.pTail->pNext= p;
        L.pTail=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
}
void PrintList(List L){
    Node* p= L.pHead;
    while(p!= NULL){
        cout<< p->value<< " ";
        p=p->pNext;
    }
}
int main()
{
    List songuyen;
    do
    {
        int add;
        cin >> add;
        if(add==0)
        {
            int value;
            cin >> value;
            Node *p=creatNode(value);
            AddFirst(songuyen,p);
        }
        else if(add==1)
        {
            int value;
            cin >> value;
            Node *p=creatNode(value);
            AddLast(songuyen,p);
        }
        else
            break;
    }while(1);
    PrintList(songuyen);
    return 0;
}
