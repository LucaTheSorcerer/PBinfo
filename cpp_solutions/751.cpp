#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, k;
    cin >> n >> m;
    int r = -1;
    int a[100][100], v[1000];
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> a[i][j];

    int p;
    cin >> p;
    for(i = 0; i < p; i++)
        cin >> v[i];
    for(i = 0; i < p; i++)
    {
        int cnt = 0;
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < m; k++)
            {
                if(a[j][k]==v[i] && r != j)
                {
                    r = j;
                    cnt++;
                }
            }
        }
        if(cnt == n) cout << "DA" << endl;
        else cout << "NU" << endl;
    }
    return 0;
}