#include <iostream>
using namespace std;

int n, a[101][101], i, j, sw=1;

int main()
{
    cin >> n;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            cin >> a[i][j];
	for(i = 1; i <= n; i++)
        if(a[i][i] != 0)
        	sw = 0;

    for(i = 1; i <= n; i++)
    	for(j = 1; j <= n; j++)
        	if(a[i][j]!=0 && a[i][j] != 1)
        		sw = 0;
    for(i = 1; i < n && sw; i++)
        for(j = i+1; j <= n && sw; j++)
            if(a[i][j]!=a[j][i])
                sw = 0;

    if(sw==1)
        cout << 1;
    else
        cout << 0;

    return 0;
}

