#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "PT co hai nghiem phan biet:";
            cout << "\nx1 = " << x1;
            cout << "\nx2 = " << x2;
        } else if ( delta == 0) {
            cout << "PT co nghiem kep: x1 = x2 = " << -b/(2*a);
        } else {
            cout << "PTVN";
        }
    }
