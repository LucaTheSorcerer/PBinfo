#include <iostream>
#include <climits>
using namespace std;

int n, an, luna, zi, maxim = -INT_MAX, minim = INT_MAX, indice1, indice2, x;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> an >> luna >> zi;
        x = 1000 * an + 100 * luna + 10 * zi;
        if(x > maxim)
        {
            maxim = x;
            indice1 = i;
        }
        if(x < minim)
        {
            minim = x;
            indice2 = i;
        }
    }
        cout << indice1 << " " << indice2;
        return 0;
}