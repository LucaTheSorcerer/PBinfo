#include <iostream>
using namespace std;

int prim(int n)
{
    int cnt = 0;
    if(n == 1 || n == 0) return 0; 
    for(int i = 2; i*i <= n; ++i)
    {
        if(n%i==0)
            cnt++;
        if(i*i==n)
            cnt--;
    }
    if(!cnt)
        return 1;
    else
        return 0;
}





int main()
{
    int n, t, count = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> t;
        if(prim(t))
            count++;
    }
    if(count != 0)
        cout << "DA";
    else
        cout << "NU";
    
    return 0;
}