    /*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
    sort
    stable_sort
    partial_sort
    partial_sort_copy
    sort_heap
    set
    multi_set
    map
    unordered_map
    include
    [
    ]
    ###End banned keyword*/

    #include <iostream>
    using namespace std;
    int id=0;
    struct cus
    {
        string com;
        int thutu;
        cus*pNext;
    };
    struct List{
        cus* pHead = NULL;
        cus* pTail= NULL;
    };
    cus* creatNode(string loai){
        cus* p= new cus;
        p->com=loai;
        p->thutu=id;
        p->pNext=NULL;
        return p;
    }
    void AddLast(List &L, cus*p){
        if(L.pTail!=NULL){
            L.pTail->pNext= p;
            L.pTail=p;
        }
        else{
            L.pHead=p;
            L.pTail=L.pHead;
        }
    }
 void RemoveHead(List	&l)	{
    cus	*p;
    if	(l.pHead	!=	NULL){
        p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete	p;
    }
    return;
}
void PrintList(List L){
    cus* p= L.pHead;
    if(p==NULL)
    {
        cout << "Tiem qua e, khong co khach nao";
    }
    while(p!= NULL){
       cout<< p->thutu << " "<< p->com << endl;
        p=p->pNext;
    }
}
int main()
{
    List khach;
    do
    {
        int go;
        cin >> go;
        if(go==0)
        {
            id++;
            string loai;
            cin >> loai;
            cus*p=creatNode(loai);
            AddLast(khach,p);
        }
        else if(go==1)
        {
            RemoveHead(khach);
        }
        else
        {
            PrintList(khach);
            break;
        }
    }while(1);
}
