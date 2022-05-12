#include <iostream>
using namespace std;

double n, count = 0, a[1001], c = 0, s_vec = 0, sum = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s_vec += a[i];
        c++;
    }
    sum = s_vec/c;
    
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] > sum)
            count++;
    }
    cout << count;
    return 0;
}