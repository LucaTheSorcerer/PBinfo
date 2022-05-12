#include <iostream>
using namespace std;

int main()
{
    int n, x = 1;
    cin >> n;
    while(n & x)
    {
        n ^= x;
        x <<= 1;
    }
    n ^= x;
    cout << n;
    return 0;
}