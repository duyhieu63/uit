
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);
int myStrlen(char s[], int k)
{
    int count = 0;
    for (int i = k; s[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}
void ChenChuoiTaiVitriK(char s[], char s1[], int k)
{
    int n1=myStrlen(s1,0);
    int n2=myStrlen(s,0);
    for(int i=n2;i>=k;i--)
    {
        s[i+n1]=s[i];
    }
    for(int i=k, j=0;j<n1;i++,j++)
    {
        s[i]=s1[j];
    }
    puts(s);
    cout << myStrlen(s,0);
}
int main()
{
	char s[MAX], s1[MAX];
	fgets(s,300,stdin);
	fgets(s1,300,stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
	    ChenChuoiTaiVitriK(s,s1,k);
	}
}
