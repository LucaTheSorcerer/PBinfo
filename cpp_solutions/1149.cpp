#include <iostream>
#include <cmath>
using namespace std;
int i, n, v[1001];

int prim(int n)
{
	if(n==2) return 1;
	if(n==1 || n%2==0) return 0;
	for(int i = 3; i <= sqrt(n); i += 2)
		if(n%i == 0) return 0;
	return 1;
}

int divide(int ls, int ld)
{
	int mj, s1, s2;
	if(ls == ld)
	{
		if(prim(v[ls])) return 1;
		return 0;
	}
	else
	{
		mj = (ls+ld)/2;
		s1 = divide(ls, mj);
		s2 = divide(mj+1, ld);
		return s1 + s2;
	}
}

int main()
{
	cin >> n;
	int i;
	for(i = 1; i <= n; i++) cin >> v[i];
	if(divide(1, n)) cout << "DA";
	else cout << "NU";
	return 0;
}
