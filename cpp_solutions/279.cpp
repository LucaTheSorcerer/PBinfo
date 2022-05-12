#include <fstream>
using namespace std;
ifstream fin("distincte.in");
ofstream fout("distincte.out");
int n, a[100001], i;

int main()
{
	fin >> n;
	for(i = 0; i < n; i++) fin >> a[i];
	for(i = 0; i < n; i++)
		if(a[i]!=a[i-1])
			fout << a[i] << " ";
	return 0;
}
