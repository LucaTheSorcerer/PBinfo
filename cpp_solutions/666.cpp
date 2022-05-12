#include <iostream>
using namespace std;

int prim(int n)
{
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(n%2==0) return 0;
    int i;
    for(i = 3; i * i <= n; i+=2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n, m, cnt = 0;
    int a[102][102];
    cin >> n >> m;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    for(i = 2; i <= n; i+=2)
        for(j = 1; j <= m; j++)
        {
            if(prim(a[i][j])) cnt++;
        }
        cout << cnt;
        return 0;
}