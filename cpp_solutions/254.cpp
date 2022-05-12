#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, a[10001], b[10001], p;
	cin >> n;
	int i;
	for(i = 1; i <= n; i++) cin>> a[i] >> b[i];
	for(i = 1; i <= n; i++)
	{
		p = 1;
		while(p*2 <= max(b[i], a[i])) p *= 2;
		if(p >= min(a[i], b[i])) cout << p << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}
