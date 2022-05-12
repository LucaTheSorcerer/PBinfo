#include <iostream>
using namespace std;

int prim(int n)
{
    int i;
    if(n == 1 || n == 0) return 0;
    for(i = 2; i * i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int main()
{
    int n, i = 0, j = 0, v[1001];
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> v[i];

    for(i = n - 1; i >= 0; i--)
        if(prim(v[i]))
        {
            for(j = i; j < n - 1; j++) 
                v[j] = v[j+1];
            n--;
        }

    for(i = 0; i < n; i++)
        cout << v[i] << ' ';
    return 0;
}