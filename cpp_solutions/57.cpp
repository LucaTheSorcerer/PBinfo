#include <fstream>
using namespace std;
ifstream fin("n_suma.in");
ofstream fout("n_suma.out");

int main()
{
	int n, tmp, s = 0, i;
	fin >> n;
	for(i = 1; i <= n; i++)
	{
		fin >> tmp;
		s += tmp;
	}
	fout << s;
	fin.close();
	fout.close();
}
