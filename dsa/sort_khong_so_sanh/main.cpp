/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
<
>
###End banned keyword*/

#include <iostream>
using namespace std;
int compare(int a, int b) {
    return abs(a-b)==a-b;
}
void my_sort(int *arr,int n)
{
for(int i=0;;i++)
    {
        if(i==n)
            break;
        for(int j=i+1;;j++)
        {
            if(j==n)
            break;
            if(compare(arr[i],arr[j]))
                swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int n;
    cin >> n;

    int *A = new int[n];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    my_sort (A, n);

    for(int i = 0; i < n; i++){
        cout << A[i] << " " ;
    }
}
