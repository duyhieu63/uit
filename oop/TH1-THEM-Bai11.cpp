#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double> khuvuc{1.5,1,0.5};
    vector<double> doituong{1.5,1,0.5};
    double diemchuan;
    cout << "Nhap diem chuan : ";
    cin >> diemchuan;
    double mon1,mon2,mon3;
    cout << "Nhap lan luot diem 3 mon thi : ";
    cin >> mon1 >> mon2 >> mon3;
    char khuvucuser,doituonguser;
    cout << "Nhap khu vuc : ";
    cin >> khuvucuser;
    cout << "Nhap doi tuong : ";
    cin >> doituonguser;
    double tong=mon1+mon2+mon3+khuvuc[khuvucuser-'A']+doituong[doituonguser-'0'-1];
    if(tong>=diemchuan && mon1>0 && mon2>0 && mon3>0)
    {
        cout << "Trung tuyen";
    }
    else
        cout << "ROT";
    return 0;
}
