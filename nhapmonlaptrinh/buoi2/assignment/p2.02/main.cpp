#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temperature;
    cout << "What is the outdoor temperature? ";
    cin >> temperature;
    cout << endl << "What is your plan today?";
    if(temperature>=33)
        cout << endl << "Good day for swimming";
    else if(temperature>=24 && temperature<33)
        cout << endl << "Good day for golfing";
        else if(temperature>=10 && temperature<24)
            cout<<endl << "Good day to play tennis";
        else
            cout <<endl << "Go to bed";
    return 0;
}
