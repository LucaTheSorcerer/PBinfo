#include <iostream>
using namespace std;

int fib(int n)
{
	int f1 = 1, f2 = 1, f3;
	while(f1 + f2 <= n)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f2;
}

int main()
{
	int n;
	cin >> n;
	while(n != 0)
	{
		cout << fib(n) << " ";
		n = n-fib(n);
	}
	return 0;
}
