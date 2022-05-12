#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int i, j;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(i <= k && j <= k) cout << 1 << " ";
			else if(i <= k && j > k) cout << 2 << " ";
			else if(i > k && j <= k) cout << 3 << " ";
			else cout << 4 << " ";
		}
		cout << endl;
	}
}
