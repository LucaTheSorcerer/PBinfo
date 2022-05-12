#include <iostream>
using namespace std;

int  prim(int n)
{
    int p=1;
    if(n==0 || n==1) p=0;
    else if(n%2==0 && n!=2) p=0;
    else
        for(int i=3;i*i<=n && p==1 ;i=i+2)
    {
        if(n%i==0) p=0;
    }
        if(p==1)
            return 1;
        else return 0;
}

int main()
{
    int n, m, k, a[101][101];
    cin >> n >> m;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            cin >> a[i][j];

        for(k = 1; k <= n; k++)
        {
            if(prim(a[k][1])==1)
            {
                for(i = k; i < n; i++)
                    for(j = 1; j <= m; j++)
                        a[i][j] = a[i+1][j];
                n--;
                k--;
            }
        }
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        return 0;
}