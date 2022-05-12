#include <iostream>
using namespace std;

int n, cnt = 0, maxim = 0;

int main()
{
    cin >> n;
    while(n)
    {
        if ((n%10)%2==1 && n%10>maxim)
        {
            maxim = n % 10;
            cnt++;
        }
        n /= 10;
    }
    if(cnt==0)
        cout << "nu exista";
    else
        cout << maxim;
    return 0;
}
