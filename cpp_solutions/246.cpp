#include <iostream>
using namespace std;

int main()
{
	int n, nr1 = -1, nr2 = -1;
	cin >> n;
	int i;
	for(i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		if(x%2==1)
		{
			nr2 = nr1;
			nr1 = x;
		}
	}
	if(nr1 != -1 && nr2 != -1)
		cout << nr2 << ' ' << nr1;
	else
		cout << "Numere insuficiente";
	return 0;
}
