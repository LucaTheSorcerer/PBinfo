#include <fstream>
using namespace std;
ifstream fin("pozitie.in");
ofstream fout("pozitie.out");
int a[10];

int main()
{
	int n, i,  x, a, p = 1;
	fin >> n >> x;
	for(i = 2; i <= n; i++)
	{
		fin >> a;
		if(a < x) p++;
	}
	fout << p;
	return 0;
}
