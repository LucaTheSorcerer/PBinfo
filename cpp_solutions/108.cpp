#include <iostream>
using namespace std;
int n, prim, cn, cnt = 0;

int main()
{
	cin >> n;
	if(n == 0) cout << 1;
	else
	{
		cn = n;
		while(n > 9)
			n /= 10;
		prim = n;
		n = cn;
		while(n > 0)
		{
			if(n % 10 == prim)
				cnt++;
			n /= 10;
		}
		cout << cnt;
	}
	return 0;
}
