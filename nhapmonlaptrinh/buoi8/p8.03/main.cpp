
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);
void Chuanhoa(char s[])
{
    int i=0;
    int sl=0;
    while(s[i]==' ')
    {
        sl++;
        i++;
    }
    int id=0;
    for(;s[id+sl]!='\0';id++)
    {
        s[id]=s[id+sl];
    }
    s[id]='\0';
    id=0;
    s[id]=toupper(s[id]);
    while(s[id]!='\0')
    {
        if(s[id]==' ')
        {
            sl=0;
            int temp=id+1;
            if(s[temp]!=' ')
                {
                    s[id+1]=toupper(s[id+1]);
                    id++;
                    continue;
                }
            else
            {
                while(s[temp]==' ')
                {
                    sl++;
                    temp++;
                }
                int j=id+1;
                while(s[j]!='\0')
                {
                    s[j]=s[j+sl];
                    j++;
                }
                s[j]='\0';
            }
            s[id+1]=toupper(s[id+1]);
            id++;
            continue;
        }
        id++;
        s[id]=tolower(s[id]);
    }
    int temp=id-1;
    while(s[temp]==' ')
    {
        temp--;
    }
    s[temp+1]='\0';
}
int main()
{
	char s[MAX];
	fgets(s,300,stdin);	//Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}


