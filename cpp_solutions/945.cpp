#include <iostream>
using namespace std;

int main()
{
    long long int n, b, c;
    cin >> n >> b >> c;
    long long int nr = 1;
    int a[10];
    int p = 0;
    while(n)
    {
        a[p] = n % 10;
        n /= 10;
        p++;
    }

    nr = p[a-1];
    int i;
    for(i = p - 2; i >= 0; --i)
    {
        nr = nr * b + a[i];
    }

    p = 0;
    int v[100];
    while(nr)
    {
        v[p] = nr % c;
        nr /= c;
        p++;
    }

    for(i = p - 1; i >= 0; --i)
        cout << v[i];
    return 0;
}