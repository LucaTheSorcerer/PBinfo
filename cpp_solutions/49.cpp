#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long rezultat = 1;
    for(long long i = 2; i <= n; ++i)
        rezultat *= i;
    cout << rezultat;
    return 0;
}
