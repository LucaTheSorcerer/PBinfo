#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int base, exponent, result;
    cin >> base >> exponent;
    result = pow(base, exponent);
    cout << result;
}