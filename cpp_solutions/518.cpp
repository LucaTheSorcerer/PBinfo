#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    int lmax = 0, st = 0, dr = 0;

    for(int i = 1; i <= n; ++i){
        if(a[i] == 0){
            int l = 0;
            for(int j = i; a[j] == 0 && j <= n; ++j)
                l++;
            if(l > lmax){
                lmax = l;
                st = i;
                dr = i + l - 1;
            }
        }
    }

    cout << st << ' ' << dr;

    return 0;
}