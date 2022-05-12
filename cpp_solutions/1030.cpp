#include <iostream>
using namespace std;

long long n, suma1, suma2, x;

int main()
{
    cin >> n;
    for(int i = 1; i <= n/2; ++i)
    {
        cin >> x;
        suma1 += x;
    }
    for(int i =1; i <= n/2; ++i)
    {
        cin >> x;
        suma2 += x;
    }
    cout << suma1 * suma2;
    return 0;
}