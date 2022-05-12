#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, x, i;
    cin >> n;
    long long int prod = 1;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        prod *= x;
    }
    double r = (double)1/n;
    cout << fixed << setprecision(2) << pow(prod, r);
    return 0;
}