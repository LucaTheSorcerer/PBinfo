#include <iostream>
#include <climits>
using namespace std;

int n, a, i, minim = INT_MAX, minim2 = INT_MAX, minim3 = INT_MAX;

int main()
{
    cin >> n;
    for(i = 1; i <= n; ++i)
    {
        cin >> a;
        if(a < minim3)
        {
            minim2 = minim3;
            minim = minim2;
            minim3 = a;
        }
        else
            if(a<minim2)
        {
            minim = minim2;
            minim2 = a;
        }
        else
            if(a < minim) minim = a;
    }
    cout << minim << " " << minim2 << " " << minim3;
    return 0;
}
