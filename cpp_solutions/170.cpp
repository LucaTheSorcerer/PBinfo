#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int maxi = 0, mini = 10, cnt = 0;
	while(n)
	{
		if(n%10 < mini)
			mini = n % 10;
		if(n % 10 > maxi)
			maxi = n % 10;
		n /= 10;
		cnt++;
	}
	if(cnt == 0)
		cout << 0;
	else
		cout << maxi + mini;
	return 0;
}
