#include <iostream>
using namespace std;
#define mod 777013;
int n, s[100001];

int main()
{
    int i;
    cin >> n;
    s[1] = 1, s[2] = 2;
    for(i = 2; i <= n; i++)
        s[i] = ((s[i-1]+s[i-2])+1) % mod;

    cout << s[n];
}