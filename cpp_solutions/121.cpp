#include <iostream>
#include <climits>
using namespace std;
long long n, maxim = -INT_MAX, cnt = 0, aux;

int main()
{
	cin >> n;
	aux = n;
	if(n == 0) cout << 0 << " " << 1;
	else
	{
		while(n != 0)
		{
			if((n%10) > maxim) maxim = n%10;
			n /= 10;
		}
		while(aux != 0)
		{
			if((aux%10)==maxim) cnt++;
			aux /= 10;
		}
		cout << maxim << ' ' << cnt;
	}
}
