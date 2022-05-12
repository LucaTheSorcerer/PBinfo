#include <iostream>
using namespace std;

int n;
int main()
{
	cin >> n;
	while(n)
	{
		if(n >= 10 && n <= 99)
			cout << n/10 + n%10;
		n /= 10;
	}
	return 0;
}
