#include<iostream>
using namespace std;
int i, j, n, k, a[101][101];
int main()
{
    cin >> n >> k;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
        {
            if(abs(i-j)<=k) a[i][j]=1;
            else if(abs(i+j-n-1)<=k) a[i][j]=1;
            else a[i][j]=2;
        }
        for(i=1; i <= n; i++)
        {
            for(j=1; j <= n; j++)
                cout << a[i][j] << ' ';
            cout << "\n";
        }
        return 0;
}