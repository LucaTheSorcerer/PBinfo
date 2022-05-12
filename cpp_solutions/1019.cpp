#include <bits/stdc++.h>
using namespace std;
int prim(int n);

int main()
{
    int n, maxim = 0, tmp;
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> tmp;
            if(tmp > maxim)
                maxim = tmp;
    }
    cout << maxim;
    return 0;
}


