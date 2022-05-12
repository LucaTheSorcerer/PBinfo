#include <fstream>
using namespace std;
ifstream fin("maxsim.in");
ofstream fout("maxsim.out");

int main()
{
	int n, a[1001], i1 = 0, i2 = 0, maxim = -1, i;
	fin >> n;
	for(i = 1; i <= n; i++) fin >> a[i];
	for(i = 1; i <= n / 2; i++)
	{
		if(a[i] + a[n - i + 1] > maxim)
		{
			maxim = a[i] + a[n - i + 1];
			i1 = i;
			i2 = n - i + 1;
		}
	}
	fout << maxim << " " << i1 << " " << i2;
	return 0;
}
