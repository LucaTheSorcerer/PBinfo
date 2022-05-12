#include <iostream>
using namespace std;

int main()
{
    int n, a[100001], b[100001], c[100001], d[100001], cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        cin >> b[i];
    for(int i = 1; i <= n; i++)
        cin >> c[i];

    int i = 1, j = 1;
    while(i <= n && j <= n)
    {
        if(a[i]==b[j]) 
        {
            d[++cnt] = a[i]; 
            i++;
            j++;
        }
        else if (a[i] < b[j]) 
            i++;
        else 
            j++;
    }
    i = 1, j = 1;
    int r = -1;
    while(i <= n && j <= cnt)
    {
        if(c[i] == d[j])
        {
            r = c[i];
            break;
        }
        if(c[i] < d[j]) i++;
        else j++;
    }
    cout << r;
}