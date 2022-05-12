#include <fstream>
using namespace std;
ifstream fin("ssume.in");
ofstream fout("ssume.out");

int main()
{
	int n, x, i = 0, j, k, c = 0, check = 0;
	fin >> n;
	int v[n];
	while(fin >> x)
	{
		v[i] = x;
		i++;
	}
	for(i = 0; i < n; i++)
	{
		check = 0;
		for(j = 0; j < n; j++)
			if(i != j)
			{
				for(k = j + 1; k < n; k++)
					if(v[i] == v[j] + v[k] && !check)
					{
						c++;
						check = 1;
					}
			}
	}
	fout << c;
	fin.close();
	fout.close();
	return 0;
}
