#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0, c = 0, p = 1, i;
    cin >> n;
    while(n!=0)
    {
        c++;
        if(n % 10 % 2 == 0) cnt++;
        n /= 10;
    }
    for(i = 1; i < c; i++) p *= i;
    cout << p * cnt;
    return 0;
}