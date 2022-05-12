#include <iostream>
using namespace std;

long long n, v[21], i, maxim, minim = 1000000000;

int main()
{
    cin >> n;
    for(i = 1; i <= n; i++) cin >> v[i];
    for(i = 1; i <= n; i++)
    {
        if(i%2==0)
            if(v[i] > maxim) maxim = v[i];
        if(i%2)
            if(v[i]>9 && v[i]<100 && v[i]<minim) minim = v[i];
    }
    if(minim == 1000000000) minim = -1;
    cout << maxim << ' ' << minim;
    return 0;
}
