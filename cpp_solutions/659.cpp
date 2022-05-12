#include <iostream>
using namespace std;

int main()
{
	int n, m, suma = 0, maxim;
	int a[101][101];
	cin >> n >> m;

	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= m; ++j)
		cin >> a[i][j];

	for(int i = 1; i <= n; ++i)
	{
		suma = 0;
		maxim = a[i][1];
		for(int j = 1; j <= m; ++j)
		{
			if(maxim < a[i][j]) maxim = a[i][j];
			suma += a[i][j];
		}
		cout << suma - maxim << " ";
	}
	return 0;
}