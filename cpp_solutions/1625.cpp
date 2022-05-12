#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float a, b, c, delta;

int main()
{
    cin >> a >> b >> c;
    delta = b*b-4*a*c;
    if(delta<0)
        cout << "Nu are solutii reale";
    else if(delta==0)
        cout << "Radacina dubla " << fixed << setprecision(2) << -(b/2*a);
    else
        cout << fixed << setprecision(2) << (-b+sqrt(delta))/(2*a) << ' ' << (-b-sqrt(delta))/(2*a);
    return 0;
}
