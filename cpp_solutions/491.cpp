#include <iostream>
using namespace std;

int n, a[1005], primul = -1, ultimul, s;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i)
        if(a[i]%2==0)
    	{
        	if(primul == -1) primul = i;
        	ultimul = i;
    	}
    if(primul != -1)
    {
        s = 0;
        for(int i = primul; i <= ultimul; ++i)
            s += a[i];
        cout << s;
    }
    else cout << "NU EXISTA";
    return 0;
}