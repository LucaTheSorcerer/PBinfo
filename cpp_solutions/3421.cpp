#include <iostream>
using namespace std;

int n,m,i,x,y,a[101][101],nc,viz[101],sel[101],k,j,h;

int main()
{
    cin>>n>>m>>k;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        a[x][y]=1;
    }
    for(h=1; h<=n; h++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(a[i][j]==0)
                    a[i][j]=a[i][h]*a[h][j];
    for(i=k; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            if(a[i][j]*a[j][i]==1)
                nc++;
        break;
    }
    cout<<nc;
    return 0;
}