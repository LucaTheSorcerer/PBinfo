#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[101], i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    bool dif = true;
    for(i = 1; i <= n; i++)
    {
        if(a[i]!=i) dif = false;
    }
    if(dif) cout << "DA";
    else cout << "NU";
    return 0;
}