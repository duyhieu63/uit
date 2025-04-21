#include <bits/stdc++.h>

using namespace std;
void interchange(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
}
void merge(int *a,int left,int middle,int right)
{
    int len_left = middle-left+1;
    int len_right=right-middle;
    int a_left[len_left];
    int a_right[len_right];
    for(int i=0;i<len_left;i++)
    {
        a_left[i]=a[left+i];
    }
    for(int i=0;i<len_right;i++)
    {
        a_right[i]=a[middle+i+1];
    }
    int i1=0;
    int i2=0;
    int k=left;
    while(i1<len_left&&i2<len_right)
    {
        if(a_left[i1]<=a_right[i2])
        {
            a[k]=a_left[i1];
            i1++;
            k++;
        }
        else
        {
            a[k]=a_right[i2];
            i2++;
            k++;
        }
    }
    while(i1<len_left)
    {
        a[k]=a_left[i1];
        i1++;
        k++;
    }
    while(i2<len_right)
    {
        a[k]=a_right[i2];
        i2++;
        k++;
    }
}
void MergeSort(int *a,int left,int right)
{
    if(left<right)
    {
        int middle=(left+right)/2;
        MergeSort(a,left,middle);
        MergeSort(a,middle+1,right);
        merge(a,left,middle,right);
    }
}
void bubblesort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool doicho=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    doicho=true;
                }
        }
        if(doicho==false)
                {
                    return;
                }
    }
}
void insertionsort(int *a,int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
void QuickSort(int *a,int l,int r)
{
    int x=a[(l+r)/2];
    int i=l;
    int j=r;
    while(j>=i)
    {
        while(a[i]<x)
            i++;
        while(a[j]>x)
            j--;
        if(i<=j)
        {
                swap(a[i],a[j]);

        i++;
        j--;
        }
    }
    if(l<j)
        QuickSort(a,l,j);
    if(i<r)
        QuickSort(a,i,r);
}
void selectionsort(int *a,int n)
{
    int i,j,min_idx;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }
        }
        swap(a[i],a[min_idx]);
    }
}
int random(int a,int b)
{
    return a + rand() % (a-b + 1);
}
void generateArray(int *&a,int n)
{
    srand(time(0));
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=random(-1000,1000);
    }
}
void output(int*a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] <<" ";
    }
    cout << endl;
}
int main()
{
    int n;
    do
    {
        cout << "Please enter a number in range 1 .. 100,000,000: ";
        cin >> n;
    }while(n<=0);
    char algro;
    do
    {
        int *a;
    generateArray(a,n);
    if(n<2000)
    {
        cout << "\nNew initial array: ";
    output(a,n);
    }
        cout<< "**************MENU***************";
    cout<< "\n1. Selection Sort";
    cout<< "\n2. Interchange Sort";
    cout<< "\n3. Insertion Sort";
    cout<< "\n4. Bubble Sort";
    cout<< "\n5. Quick Sort";
    cout<< "\n6. Merge Sort";
    cout<<"\nPlease choose an algorithm (Enter an interger): ";
    cin >> algro;
    switch(algro)
    {
        case '1':
            {
                cout <<"\nTime of Selection Sort: ";
                clock_t start =clock();
            selectionsort(a,n);
            clock_t end =clock();
            cout<< (double)(end-start)/CLOCKS_PER_SEC << "s"<<endl;
            break;
            }
        case '2':
             {
                cout <<"\nTime of Interchange Sort: ";
                clock_t start =clock();
            interchange(a,n);
            clock_t end =clock();
            cout<< (double)(end-start)/CLOCKS_PER_SEC << "s"<<endl;
            break;
            }
        case '3':
                {
                cout <<"\nTime of Insertion Sort: ";
                clock_t start =clock();
            insertionsort(a,n);
            clock_t end =clock();
            cout<< (double)(end-start)/CLOCKS_PER_SEC << "s"<<endl;
            break;
            }
        case '4':
                {
                cout <<"\nTime of Bubble Sort: ";
                clock_t start =clock();
            bubblesort(a,n);
            clock_t end =clock();
            cout<< (double)(end-start)/CLOCKS_PER_SEC << "s"<<endl;
            break;
            }
        case '5':
                 {
                cout <<"\nTime of Quick Sort: ";
                clock_t start =clock();
            QuickSort(a,0,n-1);
            clock_t end =clock();
            cout<< (double)(end-start)/CLOCKS_PER_SEC << "s"<<endl;
            break;
            }
        case '6':
                 {
                cout <<"\nTime of Merge Sort: ";
                clock_t start =clock();
            MergeSort(a,0,n-1);
            clock_t end =clock();
            cout<< (double)(end-start)/CLOCKS_PER_SEC << "s"<<endl;
            break;
            }
    }
    if(algro>'6')
    {
        cout << "\nSee you again!";
        break;
    }
    if(n<2000)
    {
        cout << "\nSorted Array: ";
        output(a,n);
    }
        cout <<"\nDo you want to continue(y/n)?";
        char cont;
        cin >> cont;
        if(cont=='y')
            continue;
        else
            break;
    }while(1);
    return 0;
}
