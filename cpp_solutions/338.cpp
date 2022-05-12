#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long rezultat = 0;
    for(int i = 1; i <= n; ++i)
    {
        long long pow = 1;
        for(int j = 1; j <= i; ++j)
            pow = 1LL * pow * i;
        rezultat += pow;
    }
    cout << "Rezultatul este " << rezultat;
    return 0;
}