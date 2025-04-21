#include <bits/stdc++.h>
using namespace std;

int main()
{
    char username[100],password[100];
    int times=0;
    char username_right[100]="24520501";
    char password_right[100]="24520501";
    do
    {
        times++;
        cin.getline(username,100);
        cin.getline(password,100);
        if(strcmp(username,username_right)==0 && strcmp(password,password_right)==0)
        {
            cout << "Xin chao 24520501 " << endl;
            break;
            times=0;
        }
    }while(times<=3);
    if(times==4)
    {
     cout << "LOI NHAP SAI QUA 3 LAN";
    }
    return 0;
}
