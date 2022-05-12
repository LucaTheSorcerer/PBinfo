#include <iostream>
#include <climits>
using namespace std;

int n;
int maxim = -INT_MAX;
int nr_ap = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        if(a > maxim)
            maxim = a, nr_ap = 1;
        else if (a == maxim)
            nr_ap++;
    }
    cout << maxim << ' ' << nr_ap;
    return 0;
}