#include <fstream>
using namespace std;
ifstream fin("divk.in");
ofstream fout("divk.out");

int main()
{
	long long n, x, k;
	fin >> n >> k;
	int i;
	for(i = 1; i <= n; i++)
	{
		fin >> x;
		int cnt = 0;
		long long aux = x;
		int j;
		for(j = 1; j * j <= x; j++)
		{
			if(x%j==0) cnt += 2;
			if(j * j == x) cnt--;
		}
		if(cnt >= k) fout << aux << " ";
	}
	return 0;
}
