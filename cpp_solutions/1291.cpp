#include <iostream>
using namespace std;
int n, m, x[10];

int valid(int k)
{
    if(k == 1 && x[k] != 0) return 1;
    if(abs(x[k] - x[k-1]) > 1) return 1;
    else return 0;
}

void afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        cout << x[i];
    cout << '\n';
}

void Back(int k)
{
    int i;
    for(i = 0; i < m; i++)
    {
        x[k] = i;
        if(valid(k))
        {
            if(k == n) afisare();
            else Back(k + 1);
        }
    }
}

int main()
{
    cin >> n >> m;
    Back(1);
    return 0;
}