#include <iostream>
#include <climits>
using namespace std;
long long int n;
long long int minim = INT_MAX;

int main()
{
    cin >> n;
    if(n > 0)
        minim = n;
    while(n)
    {
        cin >> n;
        if(n > 0 && n < minim)
            minim = n;
    }
    if(minim == INT_MAX)
        cout << "NU EXISTA";
    else
        cout << minim;
    return 0;
}