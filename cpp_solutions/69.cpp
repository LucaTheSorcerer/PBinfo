#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    cin >> n;
    while(n > 0)
    {
        a = a * 10 + (n % 10);
        n /= 10;
    }
    cout << a;
    return 0;
}
