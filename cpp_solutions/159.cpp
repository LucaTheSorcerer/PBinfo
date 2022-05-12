#include <iostream>
using namespace std;

int main()
{
    int n, v[51], i = 0, aux = 0, j = 0;
    for(i = 1; i <= n; i++)
        cin >> v[i];

    for(i = 1; i <= n; i++)
    {
        aux = v[i];
        if(aux % 2 ==0)
        {
            n++;
            for(j = n; j > i + 1; j--)
                v[j] = v[j-1];
            v[j+1] = aux * 2;
            i++;
        }
    }
}