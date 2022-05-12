#include <iostream>
using namespace std;
int f[101];

int main()
{
    int n, i;
    cin >> n;
    int x;
    for(i = 1; i <= n; i++)
        cin >> x, f[x]++;
    int cate = 0;
    for(i = 1; i <= 100; i++)
        cate += f[i]/2;
    cout << cate;
    return 0;

}