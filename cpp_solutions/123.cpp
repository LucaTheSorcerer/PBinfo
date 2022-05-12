#include <fstream>
using namespace std;
ifstream fin("permutari.in");
ofstream fout("permutari.out");

int x[10], n;

void Afis()
{
	int i;
	for(i = 1; i <= n; i++)
		fout << x[i] << " ";
	fout << endl;
}

bool OK(int k)
{
	int i;
	for(i = 1; i < k; i++)
		if(x[k]==x[i])
			return false;
	return true;
}

bool Solutie(int k)
{
	return k == n;
}

void Back(int k)
{
	int i = 1;
	for(i = 1; i <= n; i++)
	{
		x[k] = i;
		if(OK(k))
			if(Solutie(k))
				Afis();
			else
				Back(k+1);
	}
}

int main()
{
	fin >> n;
	Back(1);
	return 0;
}