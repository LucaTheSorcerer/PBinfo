#include <iostream>
using namespace std;

int main()
{
	int n;
    cin >> n;
    long long suma = 0;
    for(int i = 1; i <= n; ++i)
    {
        long long produs = 1;
        for(int j = 1; j <= i; ++j)
            produs *= j;
        suma += produs;
    }
    cout << "Rezultatul este " << suma;
    return 0;
}