#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned int suma = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        suma += i * i;
    }
    cout << "Rezultatul este " << suma;
    return 0;
}