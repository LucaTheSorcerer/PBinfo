#include <iostream>
using namespace std;

void ordonare(int a[], int n, int st, int dr)
{
    int i;
    if(n > st)
    {
        if(n - 1 <= dr)
        {
            int pmax = n - 1;
            for(i = st; i < n - 1; i++)
                if(a[i] < a[pmax])
                    pmax = i;
            int aux = a[pmax];
            a[pmax] = a[n-1];
            a[n-1] = aux;
        }
        ordonare(a, n-1, st, dr);
    }
    
}

int main()
{
    int n, a[1001], i, st, dr;
    cin >> n >> st >> dr;
    for(i = 0; i < n; i++)
        cin >> a[i];

    ordonare(a, n, st, dr);
    for(i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;    
}