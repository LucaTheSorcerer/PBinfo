#include <iostream>
using namespace std;

int main()
{
    int n, m, a[101][101], cnt = 0, cate = 0;
    cin >> n >> m;
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++) cin >> a[i][j];
    for(i = 0; i < n; i++)
    {
        cnt = 0;
        for(j = 1; j < m; j++)
        {
            if(a[i][j] == a[i][0]) cnt++;
        }
        if(cnt == m - 1) cate++;
    }
    cout << cate;
    return 0;
}