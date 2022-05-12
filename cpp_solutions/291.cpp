#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 0, cn = 0, a[101], i;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		while(a[i])
			a[i] /= 10, cnt++;
		if(cnt%2==0)
			cn++;
		cnt = 0;
	}
	if(cn == n)
		cout << "DA";
	else
		cout << "NU";
}
