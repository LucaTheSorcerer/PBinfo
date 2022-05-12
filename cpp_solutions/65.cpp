#include <iostream>
using namespace std;

int main()
{
    int n, a = 1;
    bool check = false;
    cin >> n;
    while(n != 0 )
    {
        if(n%2==1)
        {
            a = a * (n%10);
            check = true;
        }
        n /= 10;
    }
    if(check==true)
        cout << a;
    else
        cout << -1;
    return 0 ;
}