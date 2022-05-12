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
        if(prim(tmp))
        {
            if(tmp > maxim)
                maxim = tmp;
        }
    }
    cout << maxim;
    return 0;
}

int prim(int n)
{
    int cnt = 0, i;
    for(i = 1; i * i <= n; i++)
    {
        if(n%i==0)
            cnt += 2;
    }
    if(cnt==2)
        return 1;
    else
        return 0;
}
