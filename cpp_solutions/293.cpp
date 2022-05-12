#include <iostream>
using namespace std;

int n, i, sw = 1, k, v[101], x, j, c;

int main()
{
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        j = 0;
        cin >> x;
        while(x)
        {
            v[++j] = x % 10;
            x /= 10;
        }
        for(k = 1; k < j && sw; k++)
            for(c = k + 1; c <= j; c++)
                if(v[k]==v[c]) sw =0;
    }
    if(sw) cout << "DA";
    else cout << "NU";
    return 0;
}