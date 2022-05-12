#include <iostream>
using namespace std;

int main()
{
	int n, a[22][22], cnt = 0, i, j;
	cin >> n;
	for(i = 0; i <= n + 1; i++)
	{
		for(j = 0; j <= n + 1; j++)
		{
			if(i == 0 || i == n + 1 || j == 0 || j == n + 1) a[i][j] = -1;
			else cin >> a[i][j];
		}
	}
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1]) cnt++;
		}
	}
	cout << cnt;
	return 0;
}
