#include <iostream>
using namespace std;

int main()
{
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    while(n)
    {
        if(n%2==0) cnt1++;
        else cnt2++;
         n /= 2;
    }

    cout << cnt1 << ' ' << cnt2;
    return 0;
}
