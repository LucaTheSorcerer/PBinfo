#include <iostream>
using namespace std;
int main()
{
    int n,m,a[101][101];
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j];
    for(int j = m ; j >= 1 ; j --)
    {
        int ok = 0;
        for(int i = 1 ;i <= n ; i ++)
            if(a[i][j] == 0)
                ok = 1;
        if(ok==1)
        {
            for(int k = j ; k < m ; k ++)
                for(int i = 1 ; i <= n ; i ++)
                    a[i][k] = a[i][k+1];
            m --;
        }
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= m ; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}