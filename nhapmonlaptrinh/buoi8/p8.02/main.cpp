
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);
void myStrcpy(char s[], int vt, char s1[], int k)
{
    int id=vt;
    int n=0;
     for(int i=0;i<MAX;i++)
    {
        if(s1[i]=='\0')
        {
            break;
        }
        n++;
    }
    k=n;
    while(k--)
    {
        s[id]=s1[id];
        id++;
    }
    s[id]='\0';
}
void Chuanhoa(char s[])
{
    int n=0;
     for(int i=0;i<MAX;i++)
    {
        if(s[i]=='\0')
        {
            break;
        }
        n++;
    }
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='.')
        {
            int temp=i-1;
            int sl=0;
            while(temp>=0 && s[temp]==' ')
            {
                sl++;
                temp--;
            }
            int j=temp+1;
            while(s[j+sl]!='\0')
            {
                s[j]=s[j+sl];
                j++;
            }
            s[j]='\0';
            temp=i-sl+1;
            if(s[temp]=='\0')
                continue;
            else
            {
            if(s[temp]!=' ')
            {
                int k=n+1;
                while(k>temp)
                {
                    s[k]=s[k-1];
                    k--;
                }
                s[k]=' ';
            }
            else
            {
                temp++;
                j=temp;
                sl=0;
                while(s[j]==' ')
                {
                    sl++;
                    j++;
                }
                  while(s[temp+sl]!='\0')
                {
                s[temp]=s[temp+sl];
                temp++;
                }
                s[temp]='\0';
                }
            }
            }
            i++;
    }
}
int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,300,stdin);
	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	puts(s);
	puts(s1);
	return 0;
}

