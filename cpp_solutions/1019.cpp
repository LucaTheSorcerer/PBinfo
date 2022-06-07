#include <iostream>
using namespace std;

int Maxim(int v[], int st, int dr)
{
    if(st == dr) return max(v[st], v[dr]);

    int m = (st + dr)/2;
    return max(Maxim(v, st, m), Maxim(v, m + 1, dr));
}

int main()
{
    int n, i = 0;
    cin >> n;
    int v[n];
    for(i = 1; i <= n; i++)
        cin >> v[i];

    cout << Maxim(v, 1, n);
    return 0;
}