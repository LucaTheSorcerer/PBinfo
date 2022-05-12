#include <iostream>
using namespace std;


int main()
{
    int n, i = 0, cnt = 0, a[1000];
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n; i++)
    {
        if((a[i] >= a[0] && a[i] <= a[n-1]) || (a[i] <= a[0] && a[i] >= a[n-1]))
            cnt++;
    }

    if(cnt == n) cout << "DA";
    else cout << "NU";
    return 0;
}