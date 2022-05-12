#include <fstream>
#define dim 301
using namespace std;
ifstream fin("nrsubsircresc.in");
ofstream fout("nrsubsircresc.out");

long long sol[dim];
long long v[dim];
long long n;
long long i,j,s;

int main()
{
	fin >> n;
	for(i = 0; i < n; i++) fin >> v[i];
	for(i = 0; i < n; i++)
	{
		sol[i] = 1;
		for(j = 0; j < i; j++)
			if(v[i] > v[j])
				sol[i] += sol[j];
	}
	s = 0;
	for(i = 0; i < n; i++) s += sol[i];
	fout << s << "\n";
	return 0;
}
