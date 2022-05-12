#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int suma = 0;
    int count = 0;
    int aux = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> aux;
        if(aux%2==0)
        {
            count++;
            suma += aux;
        }
    }
    cout << fixed << setprecision(2) << (float)suma/count;
    return 0;
}