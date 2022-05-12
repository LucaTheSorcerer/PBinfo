#include <fstream>
#include <climits>
using namespace std;
ifstream fin("maxim4.in");
ofstream fout("maxim4.out");
int n, maxim = -INT_MAX, cnt = 0, a[101], i;

int main()
{
	fin >> n;
	for(i = 0; i < n; i++) fin >> a[i];
	for(i = 0; i < n; i++)
	{
		if(a[i] > maxim)
		{
			maxim = a[i];
			cnt = 1;
		}
		else if(a[i] == maxim) cnt++;
	}
	fout << maxim << " " << cnt;
	return 0;
}
