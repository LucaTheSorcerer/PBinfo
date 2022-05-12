#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n, i = 0;
    long long s = 0, x;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        s += x * x;
    }

    cout << fixed << setprecision(2) << sqrt(s/n);
    return 0;

}