
#include  <iostream>
using namespace std;

struct DNode
{
	int info;
	DNode *pNext, *pPrev;
};

struct DList
{
	DNode *pHead, *pTail;
};

void init(DList &L)
{
    L.pHead=NULL;
    L.pTail=NULL;
}
DNode* creatNode(int x){
    DNode* p= new DNode;
    p->info=x;
    p->pNext=NULL;
    p->pPrev=NULL;
    return p;
}
void addTail(DList &L, int x){
    DNode* p=creatNode(x);
    if(L.pTail!=NULL){
            p->pPrev=L.pTail;
        L.pTail->pNext= p;
        L.pTail=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
}
void createList(DList &L)
{
    while(1)
    {
        int x;
        cin >> x;
        if(x==-1)
            break;
        addTail(L,x);
    }
}
void printList(DList L)
{
     DNode* p= L.pHead;
     if(p==NULL)
     {
         cout << "List is empty";
         return;
     }
    while(p!= NULL){
        cout<< p->info<< " ";
        p=p->pNext;
    }
}
void addHead(DList &L,int x){
    DNode* p=creatNode(x);

    if(L.pHead!=NULL){
            L.pHead->pPrev=p;
        p->pNext=L.pHead;
        L.pHead=p;
    }
    else{
        L.pHead=p;
        L.pTail=L.pHead;
    }
}
void addAfter(DList &L,int x,int y)
{
    DNode*p=L.pHead;
    while(p)
    {
        if(p->info==x)
        {
            if(p==L.pTail)
                addTail(L,y);
            else
            {
                DNode*q=creatNode(y);
                q->pNext=p->pNext;
                p->pNext->pPrev=q;
                p->pNext=q;
                q->pPrev=p;
            }
            return;
        }
        p=p->pNext;
    }
    cout << "\nCan't find the value "<<x;
}
void addBefore(DList &L,int x,int y)
{
     DNode*p=L.pHead;
    while(p)
    {
        if(p->info==x)
        {
            if(p==L.pHead)
                addHead(L,y);
            else
            {
                DNode*q=creatNode(y);
                p->pPrev->pNext=q;
                q->pPrev=p->pPrev;
                p->pPrev=q;
                q->pNext=p;
            }
            return;
        }
        p=p->pNext;
    }
    cout << "\nCan't find the value "<<x;
}
void addAfterMulti(DList&L,int x,int y)
{
    bool add_yet=false;
    DNode*p=L.pHead;
    while(p)
    {
        if(p->info==x)
        {
            if(p==L.pTail)
                addTail(L,y);
            else
            {
                DNode*q=creatNode(y);
                q->pNext=p->pNext;
                p->pNext->pPrev=q;
                p->pNext=q;
                q->pPrev=p;
            }
            add_yet=true;
        }
        p=p->pNext;
    }
    if(add_yet==false)
         cout << "\nCan't find the value "<<x;
}
void addBeforeMulti(DList&L,int x,int y)
{
    bool add_yet=false;
    DNode*p=L.pHead;
    while(p)
    {
        if(p->info==x)
        {
           if(p==L.pHead)
                addHead(L,y);
            else
            {
                DNode*q=creatNode(y);
                p->pPrev->pNext=q;
                q->pPrev=p->pPrev;
                p->pPrev=q;
                q->pNext=p;
            }
            add_yet=true;
        }
        p=p->pNext;
    }
    if(add_yet==false)
         cout << "\nCan't find the value "<<x;
}
void removeHead(DList&L,int supple=0)
{
    if(L.pHead==NULL)
    {
        cout<<"\nList is empty. Can't delete";
        return;
    }
    char choose;
    if(supple==0)
    {
        cout<<"\nDo you want to delete the first element?(y/n): ";
    cin >> choose;
    }
    else
    {
        choose='Y';
    }
    if(choose=='Y'||choose=='y')
    {
        DNode*p=L.pHead;
        L.pHead=L.pHead->pNext;
        if(L.pHead==NULL)
        {
            cout<<"\nThe list becomes empty";
        }
        else
            L.pHead->pPrev=NULL;
            delete p;
    }
}
void removeTail(DList&L,int supple=0)
{
    if(L.pHead==NULL)
    {
        cout<<"\nList is empty. Can't delete";
        return;
    }
     char choose;
    if(supple==0)
    {
        cout<<"\nDo you want to delete the last element?(y/n): ";
    cin >> choose;
    }
    else
    {
        choose='Y';
    }
    if(choose=='Y'||choose=='y')
    {
        DNode*p=L.pTail;
        L.pTail=L.pTail->pPrev;
        if(L.pTail==NULL)
        {
             cout<<"\nThe list becomes empty";
        }
        else
            L.pTail->pNext=NULL;
        delete p;
    }
}
void removeNode(DList&L,int x,int supple=0)
{
    DNode*p=L.pHead;
        while(p&&p->info!=x)
        {
            p=p->pNext;
        }
        if(p==NULL)
        {
            cout << "\nCan't find the value "<<x;
        }
        else
    {
        char choose;
    if(supple==0)
      {
    cout<<"\nDo you want to delete "<<x<<" ?(y/n): ";
    cin >> choose;
      }
      else
      {
          choose='Y';
      }
    if(choose=='Y'||choose=='y')
    {
                if(p==L.pHead)
    {
        removeHead(L,1);
    }
    else if(p==L.pTail)
    {
        removeTail(L,1);
    }
    else
    {
        p->pPrev->pNext=p->pNext;
        p->pNext->pPrev=p->pPrev;
        delete p;
    }
    }
    }
}
void removeMultiNodeS(DList&L,int x)
{
    char choose='N';
        DNode*p=L.pHead;
        while(p)
        {
            DNode*temp=p->pNext;
            if(p->info==x)
            {
                if(choose=='N')
                {
        cout<<"\nDo you want to delete "<<x<<"s ?(y/n): ";
    cin >> choose;
                    }
                if(choose=='Y'||choose=='y')
                {
                removeNode(L,x,1);
                }
                else
                    return;
        }
         p=temp;
        }
        if(choose=='N')
        cout << "\nCan't find the value "<<x;
}
void removeAfter(DList&L,int x)
{
    DNode*p=L.pHead;
    while(p&&p->info!=x)
    {
        p=p->pNext;
    }
    if(p==NULL)
    {
        cout << "\nCan't find the value "<<x;
    }
    else
    {
        if(p==L.pTail)
        {
            cout<<endl<<x<<" is the last element. Can't delete the element after it";
            return;
        }
        char choose;
        cout<<"\nDo you want to delete the element after "<<x<<" ?(y/n): ";
        cin >> choose;
        if(choose=='Y'||choose=='y')
        {
            DNode*temp=p->pNext;
            p->pNext=p->pNext->pNext;
            if(p->pNext!=NULL)
            {
                p->pNext->pPrev=p;
            }
            else
                L.pTail=p;
            delete temp;
        }
    }
}
void removeBefore(DList&L,int x)
{
    DNode*p=L.pHead;
    while(p&&p->info!=x)
    {
        p=p->pNext;
    }
    if(p==NULL)
    {
        cout << "\nCan't find the value "<<x;
        return;
    }
    if(p==L.pHead)
    {
        cout<<endl<<x<<" is the first element. Can't delete the element before it";
    }
    else
    {
        char choose;
        cout<<"\nDo you want to delete the element before "<<x<<" ?(y/n): ";
        cin >> choose;
        if(choose=='Y'||choose=='y')
        {
            DNode*temp=p->pPrev;
              p->pPrev=temp->pPrev;
              if(p->pPrev!=NULL)
            temp->pPrev->pNext=p;
            else
            {
                L.pHead=p;
            }
            delete temp;
        }
    }
}
void removeMultiAfters(DList&L,int x)
{
        DNode*p=L.pHead;
        bool yet=false;
        while(p->pNext)
        {
            if(p->info==x)
                {
                    yet=true;
                }
            p=p->pNext;
        }
        if(yet==false && p->info==x)
        {
             cout<<"\nList has only one "<<x<<" and "<<x<<" is the last element. Can't delete the element after it";
        }
        else if(yet==false && p->info!=x)
        {
           cout << "\nCan't find the value "<<x;
        }
        else
        {
            char choose;
            cout<<"\nDo you want to delete all elements after "<<x<<" ?(y/n): ";
            cin >> choose;
            if(choose=='Y'||choose=='y')
            {
                DNode*iter=L.pHead;
                while(iter&&iter->pNext)
                {
                    if(iter->info==x)
                    {
                         DNode*temp=iter->pNext;
            iter->pNext=iter->pNext->pNext;
            if(iter->pNext!=NULL)
            {
                iter->pNext->pPrev=iter;
            }
            else
                L.pTail=iter;
                iter=temp->pNext;
            delete temp;
            continue;
                    }
                    iter=iter->pNext;
                }
            }
        }
}
void      removeMultiBefores(DList &L, int x)
{
     DNode*p=L.pHead;
        int yet=0;
        while(p)
        {
            if(p->info==x)
                {
                    yet++;
                }
            p=p->pNext;
        }
        if(yet==1 && L.pHead->info==x)
        {
             cout<<"\nList has only one "<<x<<" and "<<x<<" is the first element. Can't delete the element before it";
        }
        else if(yet==0)
        {
            cout << "\nCan't find the value "<<x;
        }
        else
        {
            char choose;
            cout<<"\nDo you want to delete all elements after "<<x<<" ?(y/n): ";
            cin >> choose;
            if(choose=='Y'||choose=='y')
            {
                  DNode*iter=L.pHead->pNext;
                while(iter)
                {
                    if(iter->info==x)
                    {
                        DNode*temp=iter->pPrev;
              iter->pPrev=temp->pPrev;
              if(iter->pPrev!=NULL)
            temp->pPrev->pNext=iter;
            else
            {
                L.pHead=iter;
            }
            delete temp;
                    }
                    iter=iter->pNext;
                }
            }
        }
}
void removeAll(DList&L)
{
    char choose;
    cin >> choose;
    cout<<"\nDo you want to delete all elements?(y/n): ";
    if(choose=='Y'||choose=='y')
            {
    DNode*temp=NULL;
    DNode*p=L.pHead;
    while(p)
    {
        temp=p;
        p=p->pNext;
        delete temp;
    }
    L.pHead=L.pTail=NULL;
    cout<<"\nThe list becomes empty";
            }
}
int main()
{
	DList L;
	init(L);
	int x,y,choice; char c;

	cout<<"MENU:";
    cout<<"\n1. Create a DList";
    cout<<"\n2. Print the DList";
    cout<<"\n3. Insert a value at the front";
    cout<<"\n4. Insert a value at the end";
    cout<<"\n5. Insert a value after a given value (only for the first value found)";
    cout<<"\n6. Insert a value before a given value (only for the first value found)";
    cout<<"\n7. Insert a value after a given value (for all the same values)";
    cout<<"\n8. Insert a value before a given value (for all the same values)";
    cout<<"\n9. Delete the first element";
    cout<<"\n10. Delete the last element";
    cout<<"\n11. Delete the first element containing a specific value";
    cout<<"\n12. Delete all elements storing a particular value";
    cout<<"\n13. Delete the element after a specific value (only for the first one found)";
    cout<<"\n14. Delete the element before a specific value (only for the first one found)";
    cout<<"\n15. Delete all elements after a specific value";
    cout<<"\n16. Delete all elements before a specific value";
    cout<<"\n17. Delete all elements";
    cout<<"\n20. Exit"<<endl;


	while(true)
    {
        cout<<"\n\t\tPLEASE SELECT YOUR CHOICE: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"\nEnter your positive integers until you enter -1 to finish: ";
            createList(L);
            break;
        case 2:
            cout<<"\nYour current DList: ";
            printList(L);
            break;
        case 3:
            cout<<"\nEnter a number: ";
            cin>>x;
            addHead(L,x);
            break;
        case 4:
            cout<<"\nEnter a number: ";
            cin>>x;
            addTail(L,x);
            break;
        case 5:
            cout<<"\nEnter two numbers: ";
            cin>>x>>y;
            addAfter(L,x,y);
            break;
        case 6:
            cout<<"\nEnter two numbers: ";
            cin>>x>>y;
            addBefore(L,x,y);
            break;
        case 7:
            cout<<"\nEnter two numbers: ";
            cin>>x>>y;
            addAfterMulti(L,x,y);
            break;
        case 8:
            cout<<"\nEnter two numbers: ";
            cin>>x>>y;
            addBeforeMulti(L,x,y);
            break;
        case 9:
            removeHead(L);
            break;
        case 10:
            removeTail(L);
            break;
        case 11:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            cout<<"\nEnter a number: ";
            cin>>x;
            removeNode(L,x);
            break;
        case 12:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            cout<<"\nEnter a number: ";
            cin>>x;
            removeMultiNodeS(L,x);
            break;
        case 13:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            cout<<"\nEnter a number: ";
            cin>>x;
            removeAfter(L,x);
            break;
        case 14:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            cout<<"\nEnter a number: ";
            cin>>x;
            removeBefore(L,x);
            break;
        case 15:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            cout<<"\nEnter a number: ";
            cin>>x;
            removeMultiAfters(L,x);
            break;
        case 16:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            cout<<"\nEnter a number: ";
            cin>>x;
            removeMultiBefores(L,x);
            break;
        case 17:
            if (L.pHead==NULL){cout<<"\nList is empty. Can't delete";break;}
            removeAll(L);
            break;
        case 20:
            cout<<"\nGOOD BYE";
            return 0;

        }
    }

	return 0;
}
