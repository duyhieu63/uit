#include <bits/stdc++.h>

using namespace std;
struct diem
{
    int x,y;
};
void Quick_Sort1(diem*a, int l, int r) {
    int x = a[(l + r) / 2].x;
    int i = l, j = r;
    while (i <= j) {
        while (a[i].x < x) i++;
        while (a[j].x > x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j) Quick_Sort1(a, l, j);
    if (i < r) Quick_Sort1(a, i, r);
}
void Quick_Sort2(diem*a, int l, int r) {
    int x = a[(l + r) / 2].y;
    int i = l, j = r;
    while (i <= j) {
        while (a[i].y > x) i++;
        while (a[j].y < x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j) Quick_Sort2(a, l, j);
    if (i < r) Quick_Sort2(a, i, r);
}
int main()
{
    int n;
    cin >> n;
    diem*points=new diem[n];
    for(int i=0;i<n;i++)
    {
        cin >> points[i].x >> points[i].y;
    }
    Quick_Sort1(points,0,n-1);
    for(int i=0;i<n;)
    {
        int start=i;
        int end=i;
        int sl=0;
        while(end<n && points[end].x==points[start].x)
        {
            sl++;
            end++;
        }
        if(sl>1)
        {
            Quick_Sort2(points,start,end-1);
        }
        i=end;
    }
       for(int i=0;i<n;i++)
    {
        cout << points[i].x << " " << points[i].y << endl;
    }
    return 0;
}
