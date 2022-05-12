#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, d = 0, cnt = 0;; 
    long long sumdiv = 0; 
    cin >> n;
    for(d = 1; d * d <= n; d++)
    {
        if(n%d==0)
        {  
            cnt++;
            sumdiv += d;

            if(d * d != n)
            {
                sumdiv += n/d;
                cnt++;
            }
        }
    }
    cout << fixed << setprecision(2) << (float)sumdiv/cnt; 
    return 0;
}