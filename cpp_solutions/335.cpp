#include <iostream>
using namespace std;

int main()
{
    int n, i, s = 0;
    cin >> n;
    while(n < 0 || n > 100)
    {
        cin >> n;
    }
    for(i = 1; i <= n; i++)
        if(i%2!=0)
            s = s + i * (i + 1);
        else
            s = s - i * (i + 1);
    cout << "Rezultatul este " << s;
    return 0;
}