#include <iostream>
#define mod (int)1e9
using namespace std;

unsigned long long pwr(int a, int n)
{
    if(n == 0) return 1;
    if(n % 2 == 0)
    {
        unsigned long long pwrnou = pwr(a, n/2) % mod;
        return pwrnou * pwrnou % mod;
    }
    else return pwr(a, n-1) % mod * a % mod;
}

int main()
{
    int a, n, p;
    cin >> a >> n >> p;
    long long p10 = 1;
    int i = 0;
    for(i = 1; i <= p; i++)
        p10 *= 10;
    
    cout << pwr(a, n) % p10;
    return 0;
}