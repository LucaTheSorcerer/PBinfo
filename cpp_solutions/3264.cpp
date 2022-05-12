#include <fstream>
#include <climits>
using namespace std;
ifstream fin("summin_xi.in");
ofstream fout("summin_xi.out");

int n, a[101][101], sum;

int main()
{
	fin >> n;
	int i, j;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			fin >> a[i][j];
	for(j = 1; j <= n; j++)
	{
		int minim = INT_MAX;
		for(i = 1; i <= n; i++)
			if(a[i][j] < minim) minim = a[i][j];
		sum += minim;
	}
	fout << sum;
}
