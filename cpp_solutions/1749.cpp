#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[201][201], nord = 0, sud = 0, vest = 0, est = 0, p;
    cin >> n >> p;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
        	cin >> a[i][j];
        
	for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
        {
            if(i < j && i + j < n-1) nord += a[i][j];
            else if(i > j && i+j > n-1) sud += a[i][j];
            else if(i > j && i + j < n-1) vest += a[i][j];
            else if(i < j && i + j > n-1) est += a[i][j];
        }

    if(p==1)
        cout << nord;
    else if(p==2)
        cout << est;
    else if(p==3)
        cout << sud;
    else if(p==4)
        cout << vest;
    return 0;
}
    