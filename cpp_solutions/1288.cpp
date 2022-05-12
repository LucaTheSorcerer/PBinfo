#include <iostream>
using namespace std;
int n, b, x[10];

void Afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}

void Back(int k)
{
    int i;
    for(i = 0; i < b; i++)
    {
        x[k] = i;
        if(k > 1 || i > 0)
        {
            if(k == n) Afisare();
            else Back(k + 1);
        }
    }
}


int main()
{
    cin >> n >> b;
    Back(1);
    return 0;
}
