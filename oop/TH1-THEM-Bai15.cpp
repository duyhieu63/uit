#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(0));
    cout << "Hay doan so ngau nhien tu 0 den 100 !" << endl;
    int answer=rand()%101;
    do
    {
        int guess;
        cin >> guess;
        if(guess==answer)
        {
            cout << "Chuc mung";
            break;
        }
        else if(guess<answer)
        {
            cout << "Can doan so lon hon" << endl;
        }
        else
            cout << "Can doan so nho hon" << endl;
    }while(1);
    return 0;
}
