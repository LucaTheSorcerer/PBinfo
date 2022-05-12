#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    long long s = 0;
    for(i = 2; i  < n; i++)
        s += n/i;

    if(n == 1)
        cout << n;
    else cout << s + n + 1;
    return 0;

    
}