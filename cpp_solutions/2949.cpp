#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    long double m = 0, p = 0, x;
    for(i = 1; i <= n; i++)
        cin >> x, p += 1/x;;


    cout << fixed << setprecision(2) << n/p;
    return 0;
}