#include <iostream>
using namespace std;

int main()
{
    int n, m, a[102][102];
    cin >> n >> m;
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> a[i][j];
    for(i = 0; i < n; i++)
        for(j = 0; j < m - 1; j++)
            swap(a[i][j], a[i][j+1]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}