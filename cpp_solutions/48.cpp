#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0, x;
    cin >> n;
    for(int i = 1; i * i <= n; ++i)
    {
        x = i * i;
        suma += x;
    }
    cout << "Rezultatul este " << suma;
    return 0;
}