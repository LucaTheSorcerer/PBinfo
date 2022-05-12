#include <iostream>
using namespace std;

int n, ogl, suma = 0;

int main()
{
    cin >> n;
    while(n != 0)
    {
        suma += n%10;
        n /= 10;
    }
    while(suma)
    {
        ogl = ogl * 10 + suma%10;
        suma /= 10;
    }
    cout << ogl;
    return 0;
}