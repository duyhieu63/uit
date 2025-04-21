#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;
   int lonnhat = ((a+b)+abs(a-b))/2;
   int nhonhat = ((a+b)-abs(a-b))/2;
   cout << "max = " << lonnhat <<endl << "min = " << nhonhat;
    return 0;
}
