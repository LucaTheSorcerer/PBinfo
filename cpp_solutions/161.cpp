#include <iostream>
using namespace std;

int n, a[202], count, sum = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] != 0)
        {
            sum += a[i];
            count ++;
        }
    }
    int medie = sum/count;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i]==0)
            cout << medie << " ";
        else
            cout << a[i] << " " ;
    }
    return 0;
}
    