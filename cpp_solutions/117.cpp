#include <iostream>
#include <algorithm>
using namespace std;

int numar(int n, int a[], int &k)
{
    sort(a, a + n);
    int b = a[0];
    int p = 1;
    while(b)
    {
        p *= 10;
        b /= 10;
    }

    k = a[n-1]*p + a[0];
}