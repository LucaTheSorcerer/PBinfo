#include <iostream>
using namespace std;

int main()
{
    int n, c, s = 0, cnt = 1, tmp;
    cin >> n >> c;
    while(n)
    {
        cin >> tmp;
        s += tmp;
        if(s > c)
        {
            cnt++;
            s = tmp;
        }
        n--;
    }
    cout << cnt;
    return 0;
}