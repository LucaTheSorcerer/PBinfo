#include <iostream>
using namespace std;

void sumpwr(int a, int pwr)
{
    if(a == 0) return;
    if(a % 2 == 1)
    {
        cout << pwr << " ";
        sumpwr(a/2, pwr*2);
    }
    else sumpwr(a/2, pwr*2);
}

int main()
{
    int n, pwr = 1;
    cin >> n;
    sumpwr(n, pwr);
    return 0;
}