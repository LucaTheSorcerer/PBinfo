#include <iostream>
using namespace std;

int main()
{
    int n, m, a[102][102], s = 0, i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++) cin >> a[i][j];
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
        {
            if(j+1==i || j-1==i) s += a[i][j];
        }
        cout << s;
    return 0;
}