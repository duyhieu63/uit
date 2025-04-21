#include <bits/stdc++.h>

using namespace std;

int ngay,thang,nam;
void check_ngay(bool nhuanornot)
{
    switch(thang)
        {
        case 1:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 2:
            {
                if(nhuanornot==1)
                {
                if(ngay<=29)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
                }
                else
                {
                    if(ngay<=28)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
                }
            }
        case 3:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 4:
            {
                if(ngay<=30)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 5:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 6:
            {
                if(ngay<=30)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 7:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 8:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 9:
            {
                if(ngay<=30)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 10:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 11:
            {
                if(ngay<=30)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        case 12:
            {
                if(ngay<=31)
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay hop le.";
                else
                    cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
                    break;
            }
        }
}

int main()
{
    cin >> ngay >> thang >> nam;
    if(thang<0 || thang > 12)
    {
        cout << "Thang khong hop le.";
        return 0;
    }
    if(ngay<=0||ngay >31)
    {
        cout << ngay <<"/" << thang << "/" <<nam << " la ngay khong hop le.";
        return 0;
    }
    if(nam <=0)
    {
        cout << "Nam khong hop le.";
        return 0;
    }
    if(nam%4==0 && nam%100!=0||nam%400==0)
    {
        check_ngay(1);
    }
    else
    {
        check_ngay(0);
    }
    return 0;
}
