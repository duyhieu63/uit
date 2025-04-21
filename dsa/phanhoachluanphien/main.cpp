
#include <iostream>
#include <utility>
using std::cin;
using std::cout;
using std::endl;
using std::pair;

struct Node{
    int val;
    Node* next;
};

struct List{
    Node *head, *tail;
};
Node* creatNode(int x){
    Node* p= new Node;
    p->val=x;
    p->next=NULL;
    return p;
}

void init(List &l){
    l.head = l.tail = NULL;
}
void add_tail(List &L,int x){
    Node*p=creatNode(x);
    if(L.tail!=NULL){
        L.tail->next= p;
        L.tail=p;
    }
    else{
        L.head=p;
        L.tail=L.head;
    }
}
void printList(List L){
    Node* p= L.head;
    while(p!= NULL){
        cout<< p->val<< " ";
        p=p->next;
    }
    cout << endl;
}
pair<List,List>split(List l)
{
    List chan,le;
    init(le);
    init(chan);
    int i=0;
    Node*p=l.head;
    while(p)
    {
        Node*temp=p;
        if(i%2==0)
        {
            add_tail(chan,p->val);
        }
        else
        {
             add_tail(le,p->val);
        }
        i++;
        p=p->next;
        delete temp;
    }
    return std::make_pair(chan,le);
}
int main()
{
    List l; init(l);
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int x;
    do{
        cin >> x;
        if (x != 0) add_tail(l, x);
        else break;
    } while(true);


    pair<List, List> ls = split(l);

    printList(ls.first);
    printList(ls.second);

    return 0;
}
