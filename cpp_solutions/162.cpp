#include <iostream>
using namespace std;

int n, i, v[17], j, aux;

int main()
{
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> v[i];
		cout << v[i] << " ";
	}
	cout << endl;
	for(i = 1; i <= n - 1; i++)
	{
		v[0] = v[1];
		for(j = 2; j <= n; j++) v[j-1] = v[j];
		v[n] = v[0];
		for(j = 1; j <= n; j++) cout << v[j] << " ";
		cout << endl;
	}
	return 0;
}
