#include <iostream>
using namespace std;

int n, m, a[101][101], s;

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        s = 0;
        for(int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
            s = s + a[i][j];
        
        }
        cout << s << " ";
    }
    return 0;
}