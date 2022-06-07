#include <iostream>
using namespace std;

long long s;

void solve(long long x, long long y)
{
    long long n;
    if(x <= y)
    {
        cin >> n;
        solve(y, n);
        cout << x << ' ';
    }
    else
    {
        s = y;
        cout << x << ' ';
        return;
    }
}

int main()
{
    long long x, y;
    cin >> x >> y;
    do
    {
        solve(x, y);
    } while ((x = s) && cin >> y && x != 0);
    
}