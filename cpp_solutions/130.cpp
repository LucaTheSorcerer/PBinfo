#include <fstream>
using namespace std;
ifstream fin("sortcif.in");
ofstream fout("sortcif.out");

int sum(int n)
{
	int s;
	while(n)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}


int main()
{
	int n, i, j, a[1001], v[1001], p[1001];
	fin >> n;
	for(i = 1; i <= n; i++)
	{
		fin >> a[i];
		v[i] = sum(a[i]);
	}
	
	for(i = 1; i < n; i++)
		for(j= i + 1; j <= n; j++)
			if(v[i] > v[j])
				swap(v[i],v[j]);

	for(i = 1; i <= n; i++)
	{
		int cnt = 0;
		for(j = 1; j <= n; j++)
			if(v[i]==sum(a[j]) && cnt == 0 && p[i] != p[j])
			{
				fout << a[i] << ' ';
				cnt++;
				p[j] = a[j];
			}
	}
	return 0;
}