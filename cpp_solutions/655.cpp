#include <iostream>
using namespace std;
int n, i,  a[1001], b[1001];

int main()
{
    cin >> n;
    for(i = 1; i <= n; i++) cin >> a[i];
    for(i = 1; i <= n; i++) cin >> b[i];
    int k1=0, k2=0;
    for(i = 1; i <= n; i++)
    {
        if(a[i]==1 && b[i]==2) k1++;
        if(a[i]==2 && b[i]==1) k2++;
    }
    if(k1>k2)
        swap(k1, k2);
    cout << (k2-k1)+k1;
    return 0;
}
