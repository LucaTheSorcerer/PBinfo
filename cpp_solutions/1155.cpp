#include <iostream>
using namespace std;

int CautareBinara(int v[], int x, int st, int dr)
{
    if(st > dr) return 0;

    int m = (st + dr)/2;
    if(x < v[m]) return CautareBinara(v, x, st, m-1);
    if(v[m] < x) return CautareBinara(v, x, m+1, dr);
    if(x == v[m]) return 1;
}

int main()
{
    int n, m, i, j ,x;
    cin >> n;
    int v[n];

    for(i = 0; i < n; i++)
        cin >> v[i];
    
    cin >> m;
    for(j = 0; j < m; j++)
    {
        cin >> x;
        if(CautareBinara(v, x, 0, n-1)) cout << "1" << " ";
        else cout << "0" << " ";
    }

    return 0;
}