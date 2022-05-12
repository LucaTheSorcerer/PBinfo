#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0;
    cin >> n;
    int aux;
    for(int i = 1; i <= n; ++i)
    {
        cin >> aux;
        suma += aux;
    }
    cout << suma;
    return 0;
}