#include <fstream>
using namespace std;
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");
int f[11];

int main()
{
	int n;
	fin >> n;
	int x;
	int i, j;
	for(i = 1; i <= n; i++)
		fin >> x, f[x]++;
	int cnt = 1;
	for(i = 0; i <= 9; i++)
	{
		for(j = 1; j <= f[i]; j++)
		{
			fout << i << ' ';
			if(cnt % 20 == 0)
				fout << endl;
			cnt++;
		}
	}
}
