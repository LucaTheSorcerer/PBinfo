#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101][101], nord = 0, sud = 0, vest = 0, est = 0, v[4], i, j;
    cin >> n;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            if(i < j && i + j < n - 1) nord += a[i][j];
            else if(i < j && i + j > n - 1) est += a[i][j];
            else if(i > j && i + j < n - 1) vest += a[i][j];
            else if(i > j &&  i + j > n - 1) sud += a[i][j];
        }
    v[1] = nord;
    v[2] = sud;
    v[3] = est;
    v[4] = vest;
    sort(v + 1, v + 5);
    for( i = 1; i <= 4; i++) cout << v[i] << " ";
}
