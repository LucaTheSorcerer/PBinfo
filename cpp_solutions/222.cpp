#include <fstream>
using namespace std;
ifstream fin("mincols.in");
ofstream fout("mincols.out");

int main()
{
	int n, a[50][50], ind = 0, m, smax = -100001;
	fin >> n;
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++) fin >> a[i][j];
	for(j = 0; j < n; j++)
	{
		int mini = 1001;
		for(i = 0; i < n; i++)
		{
			if(a[i][j] < mini) mini = a[i][j];
		}
		fout << mini << " ";
	}
	fin.close();
	fout.close();
	return 0;
}
