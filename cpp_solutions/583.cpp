#include <iostream>
using namespace std;
int n, m, a[101][101], i, j, nc, S[101], v[101];

void citire()
{
    int x, y;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
}

void Roy_Warshall()
{
    int k, i, j;
    for(k = 1; k <= n; k++)
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(a[i][j]==0)
                    a[i][j] = a[i][k] * a[k][j];
}

void zero()
{
    for(int i = 1; i <= n; i++)
        S[i] = 0;
}

int main()
{
    citire();
    Roy_Warshall();
    for(i = 1; i <= n; i++)
        if(v[i]==0)
        {
            nc++;
            zero();
            for(j = 1; j <= n; j++)
                if(j==i) S[i]=1;
                else S[j] = a[i][j]*a[j][i];
            for(j = 1; j <= n; j++)
                if(S[j]==1) v[j]=nc;
        }
    cout << nc;
    return 0;
}