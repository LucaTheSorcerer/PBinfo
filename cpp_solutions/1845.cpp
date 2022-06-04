#include <iostream>
using namespace std;


void ordonare(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            int aux = a[i];
            a[i] = a[i-1];
            a[i-1] = aux;
        }
    }

    if(n > 0)
        ordonare(a, n-1);
}

int main()
{
    int n, a[1001], i;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];

    ordonare(a, n);

    for(i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
    
}