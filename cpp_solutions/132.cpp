#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("elempp.in");
ofstream fout("elempp.out");

int pp(int n)
{
	while(n > 99)
	{
		n /= 10;
	}
	if(sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;
}

int main()
{
	int n, a[21], i;
	fin >> n;
	for(i = 0; i < n; i++) fin >> a[i];
	for(i = 0; i < n; i++)
	{
		if(pp(a[i])) fout << a[i] << " ";
	}
	return 0;
}