#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int aux;
    while(aux != 0)
    {
        cin >> aux;
        suma += aux;
    }
    cout << suma;
    return 0;
}