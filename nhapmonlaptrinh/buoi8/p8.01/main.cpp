#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
int main()
{
    char s[MAX];
    cin.getline(s,MAX);
    int n=0;
    for(int i=0;i<MAX;i++)
    {
        if(s[i]=='\0')
        {
            break;
        }
        n++;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            cout << "CHUOI KHONG HOP LE.";
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << s[i];
    }
    return 0;
}
