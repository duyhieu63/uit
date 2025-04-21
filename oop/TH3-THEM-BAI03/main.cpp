#include "HTRON.h"
int main()
{
    DIEM a1(5,6),a2(a1),a3;
    a3=a1;
    HTRON t1;
    cout << "So luong hinh tron la : " << t1.getDem() << endl;
    HTRON t2,t3(a3,2),t4(9);
    t1=t2;
    cout << t1 << t2 << t3 << t4;
    HTRON t5,t6,t7;
    t5=t6=t1;
    cout << "So luong hinh tron la : " << t1.getDem() << endl;
    cout << "Chu vi hinh tron 1 la :  " << t1.TinhChuvi() << endl;
    cout << "Dien tich hinh tron 4 la : " << t4.TinhDienTich() << endl;
    cout << "Chu vi hinh tron 5 la : " << t5.TinhChuvi() << endl;
    return 0;
}
