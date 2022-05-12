#include <fstream>
using namespace std;
ifstream fin("maxn.in");
ofstream fout("maxn.out");

int main()
{
	int n, m, a[100001], x, ind = 0;
	fin >> n;
	int i, j;
	for(i = 1; i <= n; i++) fin >> a[i];
	int max = a[1];
	for(i = 1; i <= n; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			fout << max << " ";
		}
		else fout << max << " ";
	}
}
