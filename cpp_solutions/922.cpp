#include <bits/stdc++.h>
using namespace std;

struct Punct
{
	int x, y;
};

double Dist(Punct P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

int main()
{
	int n, count = 0;
	Punct P[101];
	double maxim = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		cin >> P[i].x >> P[i].y;
	}

	for(int i = 1; i <= n; ++i)
	{
		double dist = Dist(P[i]);
		if(dist > maxim)
		{
			maxim = dist;
			count = 1;
		}
		else if(dist==maxim)
			count++;
	}
	cout << maxim << " " << count;
}