#include <iostream>
using namespace std;

int n, x[25];

void Afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        cout << x[i];
    cout << '\n';
}

void Back(int k)
{
    int i;
    for(i = x[k-1] - 1; i <= x[k-1]+1; i += 2)
        if(i >= 0 && i <= n/2)
        {
            x[k] = i;
            if(k == n)
            {
                if(x[k] == 0) Afisare();
            }
            else Back(k + 1);
        }
}

int main()
{
    cin >> n;
    x[1] = 0;
    Back(2);
}

