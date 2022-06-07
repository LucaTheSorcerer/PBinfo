#include <iostream>
using namespace std;

long long int n;

long long sum(int n)
{
    if(n == 0) return 0;
    return n + 2 * sum(n-1);
}

int main()
{
    cin >> n;
    cout << sum(n);
}