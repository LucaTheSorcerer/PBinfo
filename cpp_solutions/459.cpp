#include <bits/stdc++.h>
using namespace std;

int main()
{
    int suma = 0;
    int aux = 0;
    while(1)
    {
        int a = aux;
        cin >> aux;
        suma += aux;
        if(aux == a)
            break;
    }
    cout << suma;
    return 0;
}