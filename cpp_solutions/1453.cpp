#include <iostream>
using namespace std;

int main()
{
	int n, i = 0, j = 0, v[1001];
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> v[i];

	for(i = n - 1; i >= 0; i--)
		if(v[i]%2==0)
		{
			for(j = i; j < n - 1; j++)
				v[j] = v[j+1];
			n--;
		}

	for(i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;
}