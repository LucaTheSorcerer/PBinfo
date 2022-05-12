#include <iostream>
using namespace std;

//BUBBLE SORT

int main()
{
    int n, a[1001], h[1001];
    bool sortat = false;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> h[i], a[i] = i;

    for(int i = 1 ; i < n ; i ++)
    {
        int x = a[i];
        int p = i - 1;
        while(p >= 0 && a[p] > x)
            a[p + 1] = a[p], p --;
        a[p + 1] = x;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;

}