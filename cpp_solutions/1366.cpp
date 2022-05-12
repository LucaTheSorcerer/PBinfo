#include <iostream>
using namespace std;

int main()
{
    int n, check = 1, a[100001];
    cin >> n;
    int i, j;
    for(i = 1; i <= n; i++) cin >> a[i];
    for(i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
    while(check==1)
    {
        check = 0;
        for(i = 1; i <= n - 1; i++)
        {
            if(abs(a[i]%2) == abs(a[i+1]%2) && a[i] != a[i+1])
            {
                n++;
                for(j = n; j >= i + 1; j--)
                    a[j+1] = a[j];
                a[i+1] = (a[i] + a[i+1]) / 2;
                check = 1;
                i++;
            }
        }
        if(check == 1)
        {
            for(j = 1; j <= n; j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}