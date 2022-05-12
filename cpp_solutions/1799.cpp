#include <iostream>
using namespace std;

int n;
long long int suma = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        suma = suma * 2 + i;
    	cout << suma;
}