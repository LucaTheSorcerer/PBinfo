#include <iostream>
using namespace std;

int palindrom(int n)
{
	int ogl = 0, aux = n;
	while(n != 0)
	{
		ogl = ogl*10 + n%10;
		n /= 10;
	}
	if(aux==ogl) return 1;
	else return 0;
}

int main()
{
	int n, aux, maxim = -1, cnt = 0;
	cin >> n;
	while(n != 0)
	{
		if(palindrom(n) && n > maxim)
		{
			maxim = n;
			cnt = 1;
		}
		else if(palindrom(n) && n == maxim) cnt++;
		cin >> n;
	}
	if(maxim == -1) cout << "NU EXISTA";
	else
		cout << maxim << ' ' << cnt;
	return 0;
}
