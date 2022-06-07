#include <iostream>
using namespace std;

long long solve(int a, int b)
{
    if(a == 0 || b == 0)
        return 1;
    return solve(a-1, b) + solve(a, b-1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << solve(a, b);
}