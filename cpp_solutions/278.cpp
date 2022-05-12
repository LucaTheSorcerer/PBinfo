#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[1002], v[1002], count = 0, c = 0;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> m;
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    
    for(int i = 0; i < n; ++i)
    {
        for(int j =0; j < m; ++j)
            if(a[i] > v[j])
            	count++;
           	if(count==m)
            	c++;
            count = 0;
    }
    cout << c;
    return 0;
}