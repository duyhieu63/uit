#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> menh_gia{500,200,100,50,20,10,5,2,1};
    int tien;
    cout << "Nhap vao so tien (don vi ngan dong) : ";
    cin >> tien;
    vector<int> soto(9,0);
    int i=0;
    while(tien>0)
    {
        if(tien>=menh_gia[i])
        {
            tien-=menh_gia[i];
            soto[i]++;
        }
        else
        {
            i++;
        }
    }
    cout << "Quy doi la : " << endl;
    for(int i=0;i<9;i++)
    {
        cout << "Menh gia  " << menh_gia[i] << " co so to la : " << soto[i] << endl;
    }
    return 0;
}
