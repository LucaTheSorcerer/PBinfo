#include <fstream>
#include <queue>
using namespace std;
ifstream fin("dmax.in");
ofstream fout("dmax.out");
int n, m, x, y, a[101][101], v[101], nrc, d[101], maxi, rez;

void bfs(int x)
{
	int i;
	v[x] = 1;
	d[x] = 1;
	queue <int> Q;
	Q.push(x);
		while(!Q.empty())
		{
			int aux = Q.front();
			Q.pop();
			for(i = 1; i <= n; i++)
				if(!v[i] && a[aux][i] == 1)
				{
					v[i] = 1;
					Q.push(i);
					d[i] = d[aux] + 1;
				}
		}
}

int main()
{
	fin >> n >> m;
	int i;
	for(i = 1; i <= m; i++)
	{
		fin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	bfs(1);

	for(i = 1; i <= n; i++)
		if(d[i] > maxi) maxi = d[i], rez = i;
	fout << rez;
}
